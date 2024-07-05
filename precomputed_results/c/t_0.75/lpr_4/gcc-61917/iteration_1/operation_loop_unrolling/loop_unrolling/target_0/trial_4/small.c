int k;
int l;
volatile int m_2_5;

int fn3(p1) {
  int o;
  
  for (;;) {
    // Unrolled loop iterations
    for (; l; l = l + 2) {
      k = 0;
      p1 = o - p1;

      k = k - 6;
      p1 = o - p1;
    }
    
    p1 || m_2_5;
  }
}

int main() {}
