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
  for (;;) {
    // Unrolled loop 1
    for (; l; l++) {
      // Unrolled loop 2
      for (k = 0; k >= -27; k = k - 6) {
        // Unrolled iteration 1
        p1 = o - p1;
        
        // Unrolled iteration 2
        k = k - 6;
        p1 = o - p1;
        
        // Unrolled iteration 3
        k = k - 6;
        p1 = o - p1;
        
        // Unrolled iteration 4
        k = k - 6;
        p1 = o - p1;
        
        // Unrolled iteration 5
        k = k - 6;
        p1 = o - p1;
      }
      // Unrolled loop 2 end
    }
    p1 || m[2][5];
    // Unrolled loop 1 end
  }
}

int main() {}
