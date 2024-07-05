int h;
short ak[8];
unsigned p2;
unsigned short p3 = -7L;
unsigned p4;
for (p2 = 0; p2 <= 7; p2 += 1) {
	for (p4 = 0; p4 <= 7; p4 += 1) {
		if (h < 0) {
			if (ak[p3 * 8 + 0]) break;
			if (ak[p3 * 8 + 1]) break;
			if (ak[p3 * 8 + 2]) break;
			if (ak[p3 * 8 + 3]) break;
			if (ak[p3 * 8 + 4]) break;
			if (ak[p3 * 8 + 5]) break;
			if (ak[p3 * 8 + 6]) break;
			if (ak[p3 * 8 + 7]) break;
		}
	}
}
return 1L;