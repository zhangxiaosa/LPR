int u;

int v_ab[1];
int v_q[1];

int w_ab = 481894351;
int w_q = 816;

int main() {
  int a_ab = 8;
  int a_q = 666;

  for (; u <= 1; u += 1) {
    a_ab = v_ab[0] = w_ab;
    a_q = v_q[0] = w_q;
    v_ab[0] = a_ab;
    v_q[0] = a_q;
  }

  printf("checksum = %X\n", v_q[0]);
  return 0;
}