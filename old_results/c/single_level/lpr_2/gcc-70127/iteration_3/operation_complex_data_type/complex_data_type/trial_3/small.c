unsigned j;
int ab;
int q;
unsigned u;
int p2;

int main() {
  struct {
    int ab;
    int q : 22;
  } v[1];
  struct {
    int ab;
    int q : 22;
  } w = {0x1C87E74FL, 816};
  struct {
    int ab;
    int q : 22;
  } a = {8L, 666};

  for (p2 = 0; p2 < 1; p2 += 1) {
    for (; u <= 1; u += 1) {
      a = v[p2] = w;
      v[p2] = a;
    }
    j = v[p2].q;
  }
  printf("checksum = %X\n", j);
  return 0;
}