volatile int m_flat[40];
int fn3() {
  for (;;) {
    for (; true; )
      p1 = 24;
    if (p1)
      ;
  }
}
int main() {}
