typedef unsigned f;
typedef struct {
  int ab;
  signed q : 22;
} p;
f u;
int v_0_ab;
signed v_0_q_22;
p v[1];
int w_ab;
signed w_q_22;

f j;

int main() {
  int i;
  signed p2;
  int a_ab;
  signed a_q_22;
  w_ab = 0x1C87E74F;
  w_q_22 = 816;
  a_ab = 8;
  a_q_22 = 666;

  for (p2 = 0; p2 >= 0; p2 -= 1)
    for (; u <= 1; u += 1) {
      a_ab = v[0]_ab = w_ab;
      a_q_22 = v[0]_q_22 = w_q_22;
      v[0]_ab = a_ab;
      v[0]_q_22 = a_q_22;
    }

  for (i = 0; i < 1; i++)
    j = v[i].q_22;

  printf("checksum = %X\n", j);
  return 0;
}