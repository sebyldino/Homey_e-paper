const uint32_t window80_width = 80;
const uint32_t window80_height = 80;
const uint8_t window80_data[(80*80)/2] = {
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0x8E, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x45, 0xA5, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFA, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xCF, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xCF, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xCF, 0x01, 0x00, 0x10, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x01, 0x00, 0x00, 0x10, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x01, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xA2, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0x9B, 0x00, 0x00, 0xB2, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0x7B, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xF3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xD3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x01, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x9F, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xD3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x01, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xD3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x01, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xD3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x01, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xD3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x01, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xD3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x01, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xD3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0xFF, 0xFF, 0xCF, 0x01, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xD3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0x14, 0xF9, 0xFF, 0xCF, 0x01, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xD3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3C, 0x00, 0xFA, 0xFF, 0xCF, 0x01, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xD3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x01, 0xC2, 0xFF, 0xFF, 0xCF, 0x01, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xD3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x40, 0xFD, 0xFF, 0xFF, 0xCF, 0x01, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xD3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x5E, 0x00, 0xF6, 0xFF, 0xFF, 0xFF, 0xCF, 0x01, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xD3, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x03, 0x91, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x01, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xD3, 0xFF, 0xFF, 0xFF, 0xFF, 0x1A, 0x20, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x01, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xD3, 0xFF, 0xFF, 0xFF, 0x8F, 0x00, 0xD4, 0xFF, 0xFF, 0xFF, 0xEC, 0xFF, 0xCF, 0x01, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xD3, 0xFF, 0xFF, 0xEF, 0x06, 0x60, 0xFF, 0xFF, 0xFF, 0x7E, 0x50, 0xFF, 0xCF, 0x01, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xD3, 0xFF, 0xFF, 0x4D, 0x00, 0xF8, 0xFF, 0xFF, 0xCF, 0x03, 0x80, 0xFF, 0xCF, 0x01, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xD3, 0xFF, 0xBF, 0x02, 0xA1, 0xFF, 0xFF, 0xFF, 0x0B, 0x20, 0xF9, 0xFF, 0xCF, 0x01, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xD3, 0xFF, 0x0A, 0x30, 0xFC, 0xFF, 0xFF, 0xFF, 0x1A, 0xC3, 0xFF, 0xFF, 0xCF, 0x01, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xD3, 0xFF, 0x08, 0xE4, 0xFF, 0xFF, 0xDF, 0x96, 0xCF, 0xFE, 0xFF, 0xFF, 0xCF, 0x01, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xD3, 0xFF, 0xCF, 0xFF, 0xFF, 0xFF, 0x3C, 0x10, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x01, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xD3, 0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0x02, 0xB2, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x01, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xD3, 0xFF, 0xFF, 0xFF, 0xFF, 0x19, 0x30, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x01, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xD3, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0xE5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x01, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xD3, 0xFF, 0xFF, 0xFF, 0x05, 0x70, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x01, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xD3, 0xFF, 0xFF, 0x4E, 0x00, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x01, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xD3, 0xFF, 0xCF, 0x03, 0xA1, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x01, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xD3, 0xFF, 0x3E, 0x20, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x01, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xD3, 0xFF, 0x5F, 0xD5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x01, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xD3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x01, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xD3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x01, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xD3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x01, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0xFE, 0xFF, 0xAF, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xD3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x01, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3B, 0xF4, 0xFF, 0xAF, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xD3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x01, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x01, 0xE4, 0xFF, 0xAF, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xD3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x01, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x08, 0x40, 0xFD, 0xFF, 0xAF, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xD3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x01, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x6E, 0x00, 0xF6, 0xFF, 0xFF, 0xAF, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xD3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x01, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0x05, 0x80, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xD3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x01, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3C, 0x10, 0xF9, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xD3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x01, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0x01, 0xB2, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xD3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x01, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0x09, 0x30, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xD3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x01, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xEF, 0x00, 0xE4, 0xFF, 0xFF, 0xDF, 0xE9, 0xFF, 0xAF, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xD3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x01, 0x00, 0xF4, 0xFF, 0xFF, 0xDF, 0xFB, 0x78, 0xFF, 0xFF, 0xFF, 0x3C, 0x80, 0xFF, 0xAF, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xD3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x01, 0x00, 0xF4, 0xFF, 0xFF, 0x2B, 0xB0, 0xFF, 0xFF, 0xFF, 0xAF, 0x01, 0xC1, 0xFF, 0xAF, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xD3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x01, 0x00, 0xF4, 0xFF, 0x7F, 0x01, 0xD2, 0xFF, 0xFF, 0xFF, 0x08, 0x40, 0xFD, 0xFF, 0xAF, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xD3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x01, 0x00, 0xF4, 0xFF, 0x07, 0x60, 0xFD, 0xFF, 0xFF, 0x5F, 0x00, 0xE6, 0xFF, 0xFF, 0xAF, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xD3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x01, 0x00, 0xF4, 0xFF, 0x17, 0xF8, 0xFF, 0xFF, 0xDF, 0x04, 0x80, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xD3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x01, 0x00, 0xF4, 0xFF, 0xDF, 0xFF, 0xFF, 0xFF, 0x2B, 0x10, 0xFA, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xD3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x01, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0x9F, 0x01, 0xC3, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xD3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x01, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x50, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xD3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x01, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0x4D, 0x00, 0xF7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xD3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x01, 0x00, 0xF4, 0xFF, 0xFF, 0xCF, 0x02, 0x91, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xD3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x01, 0x00, 0xF4, 0xFF, 0xFF, 0x0A, 0x20, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xD3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x01, 0x00, 0xF4, 0xFF, 0x9F, 0x00, 0xE4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xD3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x01, 0x00, 0xF4, 0xFF, 0x9F, 0x62, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xD3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x01, 0x00, 0xF4, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xD3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x01, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xD3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x01, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xD3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x01, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xD3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x01, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xD3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x01, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xD3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x01, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xF3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0x51, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x46, 0x00, 0x00, 0x61, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x47, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xCF, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xDF, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF6, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0xFD, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xEA, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	};
