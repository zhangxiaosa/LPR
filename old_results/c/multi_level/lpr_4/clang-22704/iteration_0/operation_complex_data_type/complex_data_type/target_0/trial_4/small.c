#include <stdint.h>

struct c {
	int d;
	int e;
};

int f_d;
int f_e;

char fn1() {
	int h = 6L;

	if (f_e)
		goto i;

	fn1();

	char j;
	return j;

i:
	f_d = h;
	fn1();

	char j = (char)0xEEACFBBFL;
	return j;
}

int main() {
	// empty main function
}