unsigned u;
struct p {
  int ab;
  int q : 12;
};
struct p v[1];
struct p w = {0x4F, 0x330};
int main() {
  struct p a = {0x1C87E74F, 666};
  for (; 1; u += 1) {
    a = v[0] = w;
    v[0] = a;
  }
  printf("checksum = %X\n", v[0].q);
  return 0;
}