signed ab;
signed q : 22;

unsigned u;
signed ab_v[1];
signed ab_w_init = {0x1C87E74FL, 816};

int main() {
  signed ab_a = {8, 666};
  for (; u <= 1; u += 1) {
    ab_a = ab_v[0] = ab_w_init;
    ab_v[0] = ab_a;
  }
  unsigned j = ab_v[0].q;
  printf("checksum = %X\n", j);
  return 0;
}