int k;
unsigned l;
volatile unsigned m[5][8];
unsigned p1;
unsigned o;

int main() {
  for (; l; l++) {
    // Loop unrolled 5 times
    p1 = o - p1;
    p1 = o - p1;
    p1 = o - p1;
    p1 = o - p1;
    p1 = o - p1;
  }
  
  if (p1)
    m[2][5];
}