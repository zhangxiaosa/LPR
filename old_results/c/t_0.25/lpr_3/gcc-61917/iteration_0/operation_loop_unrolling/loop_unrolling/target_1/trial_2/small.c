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
  
  // Unrolled loop (assuming initial value of l is 10)
  for (; l; l--) {
    // Unrolled loop (executed once)
    k = 0;
    p1 = o - p1;
  }
}

int main() {}
