typedef struct {
  int ab;
  signed q : 22;
} p;

unsigned u;
p v[1];
p w = {0x1C87E74FL, 816};
unsigned j;

int main() {
  int i = 0;

  for (int p2 = 0; p2 >= 0; p2 -= 1) {
    for (; u <= 1; u += 1) {
      v[p2] = w;
    }
  }

  j = v[i].q;

  printf("checksum = %X\n", j);
  return 0;
}