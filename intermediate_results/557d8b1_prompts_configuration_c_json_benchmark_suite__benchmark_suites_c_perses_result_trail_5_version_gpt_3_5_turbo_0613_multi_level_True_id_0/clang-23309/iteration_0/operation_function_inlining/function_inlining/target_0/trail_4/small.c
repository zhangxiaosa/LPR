typedef short a;
typedef int b;
typedef long c;
typedef unsigned char d;
typedef short e;
typedef unsigned f;
typedef unsigned g;

void fn1(f p1, int p2) {
  printf("checksum = %X\n", p1);
}

b fn2(b p1, b p2) {
  return p1 - p2;
}

/* ... The optimized program ... */