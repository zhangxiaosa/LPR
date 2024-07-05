typedef signed a;
typedef int c;
typedef unsigned d;
typedef unsigned e;
typedef unsigned f;

c k;
e l;
volatile f m[5][8];

d fn3(p1) {
  a o;
  if (l) {
    for (; l; l -= 2) {
      // Loop body iteration 1
      // Loop body iteration 2
      // Loop body iteration 1
      // Loop body iteration 2
      l -= 2;
    }
  }
  p1 || m[2][5];
}

int main() {}
