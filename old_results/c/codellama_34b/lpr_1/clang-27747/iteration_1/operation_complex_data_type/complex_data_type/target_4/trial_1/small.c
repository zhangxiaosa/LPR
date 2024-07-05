
<</SYS>>

// Decomposition of struct c
int d1 = i.d;
int d2 = i.e;
int d3 = i.g;
int d4 = i.h;

// Main function
int main() {
  int m = d2;
  d1 = m;
  int n = d4 && d1;
  int p = d1 | -(d1 && d1) - n;
  d3 = p;
}

// Optimized version
int main() {
  int m = d2;
  d1 = m;
  int n = d4 && d1;
  int p = d1 | -d1 - n;
  d3 = p;
}
