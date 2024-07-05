typedef int c;

typedef unsigned f;

typedef struct {
  c ab;
  signed q : 22;
} p;

f u;
p v[1];
p w = {0x1C87E74FL, 816};

f j;

int main() {
  int i;
  signed p2;
  p a = {8L, 666};

  for (p2 = 0; p2 >= 0; p2 -= 1) {
    for (; u <= 1; u += 1) {
      a = v[p2] = w;
      v[p2] = a;
    }
  }

  for (i = 0; i < 1; i++) {
    j = v[i].q;
  }

  printf("checksum = %X\n", j);

  return 0;
}