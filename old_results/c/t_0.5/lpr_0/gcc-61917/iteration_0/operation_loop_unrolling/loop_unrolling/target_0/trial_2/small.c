typedef signed a;
typedef int c;
typedef unsigned e;
typedef unsigned f;
c k;
e l;
volatile f m[5][8];

f fn3(p1) {
  a o;
  e i = l;

  // Unrolled loop:
  if (i) {
    // Iteration 1
    {
      // Loop body with i = 0
      for (k = 0; k >= -27; k = k - 6)
        p1 = o - p1;
    }
    i++;

    // Iteration 2
    {
      // Loop body with i = 1
      for (k = 0; k >= -27; k = k - 6)
        p1 = o - p1;
    }
    i++;

    // Iteration 3
    {
      // Loop body with i = 2
      for (k = 0; k >= -27; k = k - 6)
        p1 = o - p1;
    }
    i++;

    // Iteration 4
    {
      // Loop body with i = 3
      for (k = 0; k >= -27; k = k - 6)
        p1 = o - p1;
    }
    i++;
  }

  p1 || m[2][5];
}

int main() {}
