short ak[8];
unsigned p2;
unsigned short p3 = (unsigned short)4294967295U;
unsigned p4;
for (p2 = 0; p2 <= 7; p2 += 1) {
	for (p4 = 0; p4 <= 7; p4 += 1) {
		if (g < 0) {
			for (p4 = 0; p4 <= 7; p4 += 1) {
				if (ak[p3]) {
					break;
				}
			}
		}
	}
}
