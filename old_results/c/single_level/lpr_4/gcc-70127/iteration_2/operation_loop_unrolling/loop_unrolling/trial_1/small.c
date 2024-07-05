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
  int i;
  signed p2;
  p a = {8L, 666};

  p2 = 0;
  u = 0;
  a = v[0] = w;
  v[0] = a;
  u = 1;
  a = v[0] = w;
  v[0] = a;

  j = v[0].q;

  printf("checksum = %X\n", j);
  return 0;
}