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

  // inline the target function
  for (p2 = 0; p2 >= 0; p2 -= 1)
    for (; u <= 1; u += 1) {
      a = v[p2] = w;
      v[p2] = a;
    }

  for (i = 0; i < 1; i++)
    j = v[i].q;
  printf("checksum = %X\n", j);
  return 0;
}