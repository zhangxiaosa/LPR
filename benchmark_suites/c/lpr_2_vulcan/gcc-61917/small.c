int k;
short l;
volatile unsigned m_flat[40];
unsigned p1(main) {
  for (;;) {
    for (; l; l++)
      for (k = 0; k >= -27; k = k - 6)
        main = k - main;
    main || m_flat[2];
  }
}
int main() {}
