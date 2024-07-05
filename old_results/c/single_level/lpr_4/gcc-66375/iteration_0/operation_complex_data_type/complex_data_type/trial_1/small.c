typedef char a;
typedef short c;
typedef int d;
typedef unsigned e;
typedef unsigned g;

void fn1(unsigned p1, int p2) { printf("checksum = %X\n", p1); }

a fn2(a p1, int p2) { return p1; }

c fn3(c p1, c p2) { return p2; }

g fn4(g p1, g p2) { return p1 + p2; }

unsigned p;

e pagodaPhi_4688(unsigned p1) { p = p1; }

e musclePhi_4722(unsigned *p1) { pagodaPhi_4688(*p1); }

void pagodaFlow_4800(unsigned p1, char *p2, int p3) { musclePhi_4722(p1); }

unsigned t;

unsigned u;

unsigned v[1][4];

e fn8(a, d);

c patchPapersFlow_5124() {
a a = 0xFBL;
d b = 0L;
fn8(t, a);
return b;
}

e fn8(a p1, d p2) {
d d = 2L;
for (; u < 51; ++u) {
g e[9];
int i;
for (i = 0; i < 9; i++)
e[i] = 0x9EE7F9D1C772505BLL;
v[0][3] = fn3(4L, d);
d = fn2(v[0][3], 3);
d = fn4(d, e[0]);
}
return p1;
}

int main() {
int i, j;
int f = 0;
patchPapersFlow_5124();
for (i = 0; i < 1; i++)
for (j = 0; j < 4; j++)
pagodaFlow_4800(v[i][j], "g_1729[i][j]", f);
fn1(p, f);
return 0;
}
