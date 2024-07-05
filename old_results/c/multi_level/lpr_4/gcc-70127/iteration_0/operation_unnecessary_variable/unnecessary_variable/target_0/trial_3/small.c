unsigned j;
unsigned u;
struct p {
  int ab;
  int q : 22;
};
struct p v[1];
struct p w = {0x1C87E74F, 816};
int main() {
  int i;
  for (i = 0; i >= 0; i -= 1)
    for (; u <= 1; u += 1) {
      v[i] = w;
    }
  for (i = 0; i < 1; i++)
    j = v[i].q;
  printf("checksum = %X\n", j);
  return 0;
}