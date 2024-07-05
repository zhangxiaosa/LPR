char fn2(char p1, int p2) { return p1; }

short fn3(short p1, short p2) { return p2; }

unsigned int fn4(unsigned int p1, unsigned int p2) { return p1 + p2; }

unsigned int p;

void fn5(int p1) { p = p1; }

unsigned int u;

unsigned int v_0_3;

short fn11() {
 int d = 2L;
 for (; u < 51; ++u) {
 unsigned int e[9];
 int i;
 for (i = 0; i < 9; i++)
 e[i] = 0x9EE7F9D1C772505BLL;
 d = fn4(fn2(v_0_3 = fn3(4L, d), 3), e[0]);
 }
 return 0;
}

int main() {
 fn11();
 fn5(v_0_3);
 printf("checksum = %X\n", p);
 return 0;
}
