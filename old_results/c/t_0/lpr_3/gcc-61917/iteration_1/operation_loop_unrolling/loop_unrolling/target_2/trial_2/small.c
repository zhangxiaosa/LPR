typedef signed a;
typedef int c;
typedef unsigned d;
typedef unsigned e;
typedef unsigned f;

c k;
e l;
volatile f m_decomposed[5][8];

d fn3(p1) {
  a o;
  for (;;) {
    // Unrolled iteration 1
    p1 = o - p1;
    p1 = o - p1;
    p1 = o - p1;
    p1 = o - p1;
    p1 = o - p1;
    p1 = o - p1;

    // Unrolled iteration 2
    p1 = o - p1;
    p1 = o - p1;
    p1 = o - p1;
    p1 = o - p1;
    p1 = o - p1;
    p1 = o - p1;

    // Unrolled iteration 3
    p1 = o - p1;
    p1 = o - p1;
    p1 = o - p1;
    p1 = o - p1;
    p1 = o - p1;
    p1 = o - p1;

    p1 || m_decomposed[2][5];
    p1 || m_decomposed[2][5];
    p1 || m_decomposed[2][5];
  }
}

int main() {}