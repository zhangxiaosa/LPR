int j;

int ab;
int q : 22;

unsigned u;
int v[1][2];
int w[2] = {0x1C87E74FL, 816};

int main() {
  int i;
  int p2;
  int a[2] = {8L, 666};
  for (p2 = 0; p2 >= 0; p2 -= 1)
    for (; u <= 1; u += 1) {
      for(int k=0; k<2; k++) {
        a[k] = v[p2][k] = w[k];
        v[p2][k] = a[k];
      }
    }
  for (i = 0; i < 1; i++)
    j = v[i][1];
  printf("checksum = %X\n", j);
  return 0;
}
