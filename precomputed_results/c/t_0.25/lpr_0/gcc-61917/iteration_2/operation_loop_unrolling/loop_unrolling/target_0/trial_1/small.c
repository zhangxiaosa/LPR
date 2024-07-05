int k;
unsigned l;
volatile unsigned m_2_5;

unsigned fn3(unsigned p1) {
  for (;;) {
    // Unrolled loop
    if (l) {
      l++;
      if (l) {
        l++;
        if (l) {
          l++;
          // Repeat the loop body as needed
        }
      }
    }
    
    if (p1)
      m_2_5;
  }
}

int main() {}
