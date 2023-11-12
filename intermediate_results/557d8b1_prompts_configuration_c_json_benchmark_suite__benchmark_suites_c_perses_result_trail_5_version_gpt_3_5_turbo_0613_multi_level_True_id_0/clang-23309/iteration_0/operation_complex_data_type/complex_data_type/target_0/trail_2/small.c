short g = 3;
short a = 1L;
long b = 1L;
int c = 250UL;
short h;
unsigned e;
long f;

for (g = 3; g; g -= 1)
{
	h = a || (c = g) == 0x294A85636008822LL;
	short d = 0xBCD1L;

	if (fn1(d, fn2(b - c, 0xECL)) - h & 1UL)
		f = 1UL;
}

e = f;
printf("checksum = %X\n", e);
return 0;