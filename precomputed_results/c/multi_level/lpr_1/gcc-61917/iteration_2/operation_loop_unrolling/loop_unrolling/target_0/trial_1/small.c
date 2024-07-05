int k;
int l;
volatile int m_flat[40];

int fn3(p1) {
  int unroll_count = 4;
  
  for (; l >= unroll_count; l -= unroll_count) {
    for (int i = 0; i < unroll_count; i++) {
      p1 = 24 - p1;
    }
  }
  
  for (; l; l--) {
    p1 = 24 - p1;
  }
  
  if (p1)
    m_flat[2];
}

int main() {}
