void fn1(unsigned p1, int p2) { printf("checksum = %X\n", p1); }

unsigned j;

void fn4(unsigned p1, char *p2, int p3) { j = p1; }

int main() {
  int i;
  int b = 0;

  int a_ab = 8L;
  signed a_q = 666;

  unsigned p2;

  for (p2 = 0; p2 >= 0; p2 -= 1)
    for (unsigned u = 0; u <= 1; u += 1) {
      int w_ab = 0x1C87E74F;
      signed w_q = 816;

      int v_ab[1];
      signed v_q[1];

      int a_ab = w_ab;
      signed a_q = w_q;
      v_ab[p2] = a_ab;
      v_q[p2] = a_q;
    }

  for (i = 0; i < 1; i++)
    fn4(v_q[i], "g_217[i].f1", b);

  fn1(j, b);
  return 0;
}