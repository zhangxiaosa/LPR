int k;
unsigned l;
volatile unsigned m[5][8];
unsigned p1;
unsigned o;

int main() {
  for (; l; l++) {
    // Unrolled loop iteration 1
    k = 0;
    p1 = o - p1;
  
    // Unrolled loop iteration 2
    k = -6;
    p1 = o - p1;
  
    // Unrolled loop iteration 3
    k = -12;
    p1 = o - p1;
  
    // Unrolled loop iteration 4
    k = -18;
    p1 = o - p1;
  }

  if (p1)
    m[2][5];
}
