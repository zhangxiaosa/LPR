void fn1(unsigned p1, int p2) {
  printf("checksum = %X\n", p1);
}

unsigned j;
int v_ab;
signed int v_q;

unsigned u;
int w_ab = 0x1C87E74F;
signed int w_q = 816;

signed fn6() {
  int a_ab = 8;
  signed int a_q = 666;
  int p2;
  for (p2 = 0; p2 >= 0; p2 -= 1)
    for (; u <= 1; u += 1) {
      a_ab = v_ab = w_ab;
      a_q = v_q = w_q;
    }
}

int main() {
  int b = 0;
  fn6();
  j = v_q;
  fn1(j, b);
  return 0;
}