int u;
int v_ab[1];
signed v_q[1] : 22;
int w_ab = 0x1C87E74F;
signed w_q : 22 = 816;

int main() {
  int a_ab = 8L;
  signed a_q : 22 = 666;

  for (; u <= 1; u += 1) {
    a_ab = v_ab[0] = w_ab;
    a_q = v_q[0] = w_q;
  }

  int j = v_q[0];
  printf("checksum = %X\n", j);
  return 0;
}