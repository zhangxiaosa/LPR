unsigned u;
int ab_v_0;
signed q_v_0 : 22;
struct p {
  int ab;
  signed q : 22;
};
struct p v[1];
int ab_w = 0x1C87E74FL;
signed q_w = 816;
unsigned j;
int main() {
  int i;
  int ab_a = 8L;
  signed q_a = 666;
  for (; u <= 1; u += 1) {
    ab_a = v[0].ab = ab_w;
    q_a = v[0].q = q_w;
  }
  for (i = 0; i < 1; i++)
    j = v[i].q;
  printf("checksum = %X\n", j);
  return 0;
}