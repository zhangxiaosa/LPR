struct P {
  signed int ab;
  signed int q;
};

unsigned int u;
struct P v[1];
struct P w_init = {12425791, 816};

int main() {
  struct P a = {8, 666};
  for (; u <= 1; u += 1) {
    a = v[0] = w_init;
    v[0] = a;
  }

  unsigned int j = v[0].q;
  printf("checksum = %X\n", j);
  return 0;
}