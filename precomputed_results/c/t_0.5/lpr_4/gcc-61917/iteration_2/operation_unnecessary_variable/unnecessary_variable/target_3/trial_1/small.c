int k;
unsigned l = 1;
volatile unsigned m_25;

void fn3(p1) {
  for (; l; l++)
    for (k = 0; k >= -27; k = k - 6)
      p1 = -p1;
  p1 || m_25;
}

int main() {}
