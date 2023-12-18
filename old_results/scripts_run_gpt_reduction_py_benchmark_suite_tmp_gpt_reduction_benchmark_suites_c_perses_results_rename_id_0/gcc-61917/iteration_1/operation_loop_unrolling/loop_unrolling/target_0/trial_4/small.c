typedef int c;
typedef unsigned d;
typedef unsigned e;
typedef unsigned f;
c k;
e l;
volatile f m[5][8];
d fn3(p1) {
  signed o;
  for (;;) {
    for (; l; l++) {
      p1 = o - p1; // Duplicated statements added here
    }
    p1 || m[2][5];
  }
}
int main() {}
