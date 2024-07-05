int j;
struct p {
  int ab;
  int q : 22;
};
unsigned u;
struct p v[1];
struct p w = {0x1C87E74FL, 816};

int main() {
  int i;
  struct p a = {8L, 666};

  // Unrolled loop
  a = v[0] = w;
  v[0] = a;
  u = 1;  // updated u value

  j = v[0].q;

  printf("checksum = %X\n", j);
  return 0;
}