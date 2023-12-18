#include <stdio.h>

unsigned u;

int main() {
	int d = 2;
	unsigned v_value = 0;
	for (; u < 51; ++u)
		d = (v_value = d) + 0x9EE7F9D1C772505BLL;
	printf("checksum = %x\n", v_value);
	return 0;
}