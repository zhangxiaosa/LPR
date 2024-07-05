void fn1(unsigned p1, int p2) {
  printf("checksum = %X\n", p1);
}

unsigned j;
int ab;
signed q;

unsigned u;
int v_ab[1];
signed v_q[1];
unsigned w_ab = 0x1C87E74F;
int w_q = 816;

signed fn6() {
  int a_ab = 8;
  signed a_q = 666;
  int p2;
  for (p2 = 0; p2 >= 0; p2 -= 1) {
    for (; u <= 1; u += 1) {
      a_ab = v_ab[p2] = w_ab;
      a_q = v_q[p2] = w_q;
    }
  }
}

int main() {
  int b = 0;
  fn6();
  j = v_q[0];
  fn1(j, b);
  return 0;
}