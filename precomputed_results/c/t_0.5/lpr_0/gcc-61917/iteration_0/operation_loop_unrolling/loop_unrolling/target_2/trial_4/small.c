typedef signed a;
typedef int c;
typedef unsigned e;
typedef unsigned f;
c k;
e l;
volatile f m[5][8];

f fn3(p1) {
  a o;
  
  for (;;) {
    for (; l; l++) {
      // Unrolled iteration 1
      p1 = o - p1;
      k = k - 6;
      
      // Unrolled iteration 2
      p1 = o - p1;
      k = k - 6;
      
      // Unrolled iteration 3
      p1 = o - p1;
      k = k - 6;
      
      // Unrolled iteration 4
      p1 = o - p1;
      k = k - 6;
    }
    
    if (p1 == 0) {
      m[2][5];
    }
  }
}

int main() {}