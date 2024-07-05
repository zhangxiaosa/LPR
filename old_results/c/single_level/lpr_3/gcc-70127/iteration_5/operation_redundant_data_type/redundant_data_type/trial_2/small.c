int j;
struct p {
  int ab;
  int q : 22;
};
unsigned u;
int v[1][2];
int w[2] = {0x1C87E74FL, 816};
int main() {
  int i;
  int p2;
  int a[2] = {8L, 666};
  for (p2 = 0; p2 >= 0; p2 -= 1)
    for (; u <= 1; u += 1) {
      a = v[p2] = w;
      v[p2] = a;
    }
  for (i = 0; i < 1; i++)
    j = ((int*)&v[i][0])[1];
  printf("checksum = %X\n", j);
  return 0;
}