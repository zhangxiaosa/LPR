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
  int p2;
  struct p a = {8L, 666};

  // Unrolling first nested loop
  a = v[0] = w;
  v[0] = a;
  a = v[0] = w;
  v[0] = a;

  // Unrolling second nested loop
  a = v[0] = w;
  v[0] = a;
  a = v[0] = w;
  v[0] = a;

  j = v[0].q;

  printf("checksum = %X\n", j);

  return 0;
}