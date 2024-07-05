typedef unsigned f;
typedef struct {
  int ab;
  signed q : 22;
} p;
f u;
p v[1];
p w = {0x1C87E74FL, 816};
f j;

int main() {
  signed p2;
  p a = {8L, 666};

  for (p2 = 0; p2 >= 0; p2 -= 1) {
    u = 0;
    a = v[p2] = w;
    v[p2] = a;
  }

  j = v[0].q;

  return 0;
}

printf("checksum = %X\n", j);