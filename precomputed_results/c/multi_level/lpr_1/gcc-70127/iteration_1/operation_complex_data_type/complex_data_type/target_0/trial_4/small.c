unsigned j;
unsigned u;

struct p {
  int ab;
  signed int q : 22;
};

struct p v[1];

struct p w = {0x12345678, 999};

int main() {
  struct p a = {8L, 666};
  for (; u <= 1; u += 1) {
    a = v[0] = w;
    v[0] = a;
  }
  j = v[0].q;
  printf("checksum = %X\n", j);
  return 0;
}