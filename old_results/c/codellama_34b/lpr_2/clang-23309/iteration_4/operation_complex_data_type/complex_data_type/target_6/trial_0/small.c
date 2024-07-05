
<SYS>

// Decomposition of the program into variables with primary data type
int p1 = ac;
int p2 = (an = w);
int t = p1 || p2;

short an = 0x294A;
short w = 0;

int ao = 0xBCD1;
int temp = ao - (1 - an);

int fn2_result = fn2(temp, t);
int checksum = fn2_result & 1;

printf("checksum = %d\n", checksum);

return 0;

</SYS>
