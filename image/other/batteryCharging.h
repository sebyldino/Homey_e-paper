const uint32_t batteryCharging_width = 40;
const uint32_t batteryCharging_height = 20;
const uint8_t batteryCharging_data[(40*20)/2] = {
0xFF, 0x7E, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0xF7, 0xFF, 0xFF, 0xFF, 
	0xEF, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0xFF, 0xFF, 0xFF, 
	0x4F, 0x00, 0x32, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x23, 0x00, 0xF6, 0xFF, 0xFF, 
	0x1E, 0x50, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x03, 0xF2, 0xFF, 0xFF, 
	0x1D, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC9, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0xF1, 0xFF, 0xFF, 
	0x1D, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x83, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0xF1, 0xFF, 0xFF, 
	0x1D, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1C, 0x01, 0x31, 0xC8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0xF1, 0xCD, 0xFF, 
	0x1D, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x11, 0x11, 0x10, 0x83, 0xFC, 0xFF, 0xFF, 0xFF, 0x06, 0xF1, 0x05, 0xF5, 
	0x1D, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x10, 0x11, 0x11, 0x00, 0x30, 0xC7, 0xFF, 0xFF, 0x06, 0xF1, 0x06, 0xF2, 
	0x1D, 0x80, 0xFF, 0xEE, 0xFE, 0xFF, 0xEE, 0xCF, 0x11, 0x11, 0x32, 0x33, 0x23, 0x32, 0xA5, 0xFE, 0x06, 0xF1, 0x06, 0xF2, 
	0x1D, 0x80, 0xFF, 0x6B, 0x13, 0x21, 0x22, 0x22, 0x11, 0x01, 0xFA, 0xFF, 0xFF, 0xFF, 0xEF, 0xFF, 0x06, 0xF1, 0x06, 0xF2, 
	0x1D, 0x80, 0xFF, 0xFF, 0xAE, 0x15, 0x00, 0x11, 0x11, 0x01, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0xF1, 0x06, 0xF1, 
	0x1D, 0x80, 0xFF, 0xFF, 0xFF, 0xEF, 0x5A, 0x02, 0x10, 0x11, 0xD1, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0xF1, 0x05, 0xF4, 
	0x1D, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAE, 0x25, 0x00, 0x90, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0xF1, 0xAD, 0xFE, 
	0x1D, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0x5A, 0x31, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0xF1, 0xFF, 0xFF, 
	0x1D, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAE, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0xF1, 0xFF, 0xFF, 
	0x1E, 0x50, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x04, 0xF2, 0xFF, 0xFF, 
	0x4F, 0x00, 0x53, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x35, 0x00, 0xF5, 0xFF, 0xFF, 
	0xDF, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0xFE, 0xFF, 0xFF, 
	0xFF, 0x5E, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0xE6, 0xFF, 0xFF, 0xFF, 
	};
