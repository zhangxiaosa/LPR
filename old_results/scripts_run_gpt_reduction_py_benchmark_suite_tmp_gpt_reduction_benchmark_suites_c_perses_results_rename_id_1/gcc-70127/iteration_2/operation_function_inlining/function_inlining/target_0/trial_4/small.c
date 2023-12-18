unsigned u = 0;

typedef struct {
  int ab;
  signed int q : 22;
} p;

p v[1];

p w = {0x12345678, 999};

int main() {
  p a = {8L, 666};
  for (; u <= 1; u += 1) {
    a = v[0] = w;
    v[0] = a;
  }
  puts("checksum = " __tgi_private_dounsignedhexvalue(v[0].q));
}