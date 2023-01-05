const uint32_t battery5_width = 40;
const uint32_t battery5_height = 20;
const uint8_t battery5_data[(40*20)/2] = {
0xFF, 0x8B, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0xD9, 0xFF, 0xFF, 
	0x5F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFA, 0xFF, 
	0x09, 0xB4, 0xAA, 0xAA, 0xBB, 0xAA, 0xAA, 0xBB, 0xAB, 0xAA, 0xBA, 0xAB, 0xAA, 0xBA, 0xBA, 0xAA, 0xAA, 0x09, 0xE1, 0xFF, 
	0x04, 0x7D, 0x32, 0x33, 0xCD, 0x33, 0x23, 0xF7, 0x37, 0x33, 0xC3, 0x3D, 0x33, 0x72, 0x8F, 0x33, 0x33, 0x7C, 0xC0, 0xFF, 
	0x13, 0x0B, 0x00, 0x00, 0x67, 0x00, 0x00, 0xA0, 0x00, 0x00, 0x60, 0x07, 0x00, 0x00, 0x1A, 0x00, 0x00, 0x85, 0xC0, 0xFF, 
	0x14, 0x0B, 0x00, 0x00, 0x67, 0x00, 0x00, 0xB1, 0x01, 0x00, 0x60, 0x07, 0x00, 0x00, 0x1A, 0x00, 0x00, 0x86, 0xC0, 0xFF, 
	0x14, 0x0B, 0x00, 0x00, 0x67, 0x00, 0x00, 0xB1, 0x00, 0x00, 0x70, 0x07, 0x00, 0x00, 0x1A, 0x00, 0x00, 0x85, 0x30, 0x83, 
	0x14, 0x0B, 0x00, 0x00, 0x67, 0x00, 0x00, 0xB1, 0x01, 0x00, 0x70, 0x07, 0x00, 0x00, 0x1A, 0x00, 0x00, 0x86, 0x00, 0x30, 
	0x14, 0x0B, 0x00, 0x00, 0x67, 0x00, 0x00, 0xB1, 0x01, 0x00, 0x70, 0x07, 0x00, 0x00, 0x1A, 0x00, 0x00, 0x85, 0x00, 0x30, 
	0x14, 0x0B, 0x00, 0x00, 0x67, 0x00, 0x00, 0xB1, 0x01, 0x00, 0x70, 0x07, 0x00, 0x00, 0x1A, 0x00, 0x00, 0x85, 0x00, 0x30, 
	0x14, 0x0B, 0x00, 0x00, 0x67, 0x00, 0x00, 0xB1, 0x01, 0x00, 0x70, 0x07, 0x00, 0x00, 0x1A, 0x00, 0x00, 0x85, 0x00, 0x30, 
	0x14, 0x0B, 0x00, 0x00, 0x67, 0x00, 0x00, 0xB1, 0x01, 0x00, 0x70, 0x07, 0x00, 0x00, 0x1A, 0x00, 0x00, 0x85, 0x00, 0x30, 
	0x14, 0x0B, 0x00, 0x00, 0x67, 0x00, 0x00, 0xB1, 0x00, 0x00, 0x70, 0x07, 0x00, 0x00, 0x1A, 0x00, 0x00, 0x85, 0x00, 0x30, 
	0x14, 0x0B, 0x00, 0x00, 0x67, 0x00, 0x00, 0xB1, 0x01, 0x00, 0x70, 0x07, 0x00, 0x00, 0x1A, 0x00, 0x00, 0x86, 0x10, 0x61, 
	0x14, 0x0B, 0x00, 0x00, 0x77, 0x00, 0x00, 0xB1, 0x01, 0x00, 0x70, 0x07, 0x00, 0x00, 0x1A, 0x00, 0x00, 0x86, 0xB0, 0xFF, 
	0x14, 0x0B, 0x00, 0x00, 0x67, 0x00, 0x00, 0xA0, 0x00, 0x00, 0x60, 0x07, 0x00, 0x00, 0x1A, 0x00, 0x00, 0x85, 0xC0, 0xFF, 
	0x04, 0x5D, 0x10, 0x01, 0xBB, 0x10, 0x01, 0xF4, 0x04, 0x11, 0xB0, 0x1C, 0x11, 0x40, 0x5F, 0x10, 0x01, 0x8A, 0xC0, 0xFF, 
	0x07, 0xD7, 0xBA, 0xBB, 0xDD, 0xBB, 0xBB, 0xEC, 0xBC, 0xBB, 0xDB, 0xBD, 0xBB, 0xCB, 0xDD, 0xBB, 0xBB, 0x1C, 0xE0, 0xFF, 
	0x3E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xFF, 
	0xEF, 0x58, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0xB5, 0xFF, 0xFF, 
	};