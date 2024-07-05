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
  
  // Unrolled loop (n = 2)
  for (;;) {
    // Loop body 1
    for (; l; l++) {
      for (k = 0; k >= -27; k = k - 6) {
        p1 = o - p1;
      }
    }
    p1 || m[2][5];
    
    // Loop body 2
    for (; l; l++) {
      for (k = 0; k >= -27; k = k - 6) {
        p1 = o - p1;
      }
    }
    p1 || m[2][5];
  }
}

int main() {}
