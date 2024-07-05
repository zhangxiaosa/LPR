typedef char a;
typedef int d;
typedef unsigned int g;

a fn2(a p1, int p2) {
  return p1;
}

g v[4];

int main() {
  d d = 2L;
  for (; v[4] < 51; ++v[4]) {
    v[3] = d;
    d = fn2(v[3], 3) + 0x9EE7F9D1C772505BLL;
  }

  printf("checksum = %X\n", v[3]);
  return 0;
}