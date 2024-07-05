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
    for (; l; l++) {
      // Unrolled loop body
      p1 = o - p1;
      p1 = o - p1;
      p1 = o - p1;
      p1 = o - p1;
      p1 = o - p1;
    }
    
    p1 || m[2][5];
    l = 0;
  }
}

int main() {}
