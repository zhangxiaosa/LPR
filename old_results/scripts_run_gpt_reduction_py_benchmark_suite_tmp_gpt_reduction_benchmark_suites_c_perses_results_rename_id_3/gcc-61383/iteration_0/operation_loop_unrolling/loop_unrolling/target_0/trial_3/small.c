#include <stdio.h>

typedef signed a;
typedef short b;
typedef int c;
typedef unsigned d;
typedef unsigned f;

b fn2(b p1, int p2) {
	return p1;
}

c fn3(c p1, c p2) {
	return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1 : p1 + p2;
}

f m;
d n;
a o;
static f p = 0x01B28DB7L;

int main() {
	c ab;
	if (0x4F92L < fn2(p | (ab = o == 0 ? o : o % o), 6)) {
		// First iteration
	} else {
		a ac = 0xE3L;
		if (o <= ac) {
			// Second iteration
		} else if (ab) {
			break;
		} else {
			// Third iteration
		}
	}

	return m;
}