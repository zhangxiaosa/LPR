int k;
volatile unsigned m_2_5;
int fn3(p1) {
  int o;
  
  // First unrolled iteration
  for (k = 0; k >= -27; k = k - 6)
    p1 = o - p1;

  // Second unrolled iteration
  for (k = 0; k >= -27; k = k - 6)
    p1 = o - p1;

  // Third unrolled iteration
  for (k = 0; k >= -27; k = k - 6)
    p1 = o - p1;

  // Fourth unrolled iteration
  for (k = 0; k >= -27; k = k - 6)
    p1 = o - p1;

  p1 || m_2_5;
}
int main() {}