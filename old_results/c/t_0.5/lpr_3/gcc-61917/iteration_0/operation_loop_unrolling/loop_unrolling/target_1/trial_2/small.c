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
    if (l) {
      p1 = o - p1;
      l++;
    }
    if (l) {
      p1 = o - p1;
      l++;
    }
    if (l) {
      p1 = o - p1;
      l++;
    }
    if (l) {
      p1 = o - p1;
      l++;
    }
    
    // Unrolled loop 2
    if (k >= -27) {
      p1 = o - p1;
      k = k - 6;
    }
    if (k >= -27) {
      p1 = o - p1;
      k = k - 6;
    }
    if (k >= -27) {
      p1 = o - p1;
      k = k - 6;
    }
    if (k >= -27) {
      p1 = o - p1;
      k = k - 6;
    }
    if (k >= -27) {
      p1 = o - p1;
      k = k - 6;
    }
    
    if (!p1 && m[2][5])
      break;
  }
}

int main() {}