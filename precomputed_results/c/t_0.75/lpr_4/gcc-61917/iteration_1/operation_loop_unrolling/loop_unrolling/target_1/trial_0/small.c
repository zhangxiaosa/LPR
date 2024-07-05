int k;
int l;
volatile int m_2_5;

int fn3(p1) {
  int o;
  
  // Unrolled loop iteration 1
  for (; l; l++) {
    l++;
    l++;
    for (k = 0; k >= -27; k = k - 6)
      p1 = o - p1;
  }
  p1 || m_2_5;
  
  // Unrolled loop iteration 2
  for (; l; l++) {
    l++;
    l++;
    for (k = 0; k >= -27; k = k - 6)
      p1 = o - p1;
  }
  p1 || m_2_5;
  
  // Unrolled loop iteration 3
  for (; l; l++) {
    l++;
    l++;
    for (k = 0; k >= -27; k = k - 6)
      p1 = o - p1;
  }
  p1 || m_2_5;
  
  // Unrolled loop iteration 4
  for (; l; l++) {
    l++;
    l++;
    for (k = 0; k >= -27; k = k - 6)
      p1 = o - p1;
  }
  p1 || m_2_5;
}

int main() {}