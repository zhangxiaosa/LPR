struct p {
  int ab;
  int q : 22;
};

struct p w = {816};

int main() {
  struct p a = {0x1C87E74F, 666};

  printf("checksum = %X\n", a.q);

  return 0;
}