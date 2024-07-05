unsigned j;
int ab;
signed q : 22;

unsigned u;
int v[1][2];
int w[] = {0x1C87E74FL, 816};

int main() {
  int i;
  int a[] = {8L, 666};
  for (; u <= 1; u += 2) {
    a = v[0] = w;
    v[0] = a;
  }
  for (i = 0; i < 1; i++)
    j = v[i][1];
  printf("checksum = %X\n", j);
  return 0;
}