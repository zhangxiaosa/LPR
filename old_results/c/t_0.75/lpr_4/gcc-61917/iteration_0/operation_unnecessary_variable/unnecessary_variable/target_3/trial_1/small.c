int k;
int l;
volatile int m_2_5;

int fn3(int p1) {
  for (;;) {
    for (; l; l++)
      for (k = 0; k >= -27; k = k - 6)
        p1 = p1; // No need for o - p1 assignment
    p1 || m_2_5;
  }
}

int main() {}
