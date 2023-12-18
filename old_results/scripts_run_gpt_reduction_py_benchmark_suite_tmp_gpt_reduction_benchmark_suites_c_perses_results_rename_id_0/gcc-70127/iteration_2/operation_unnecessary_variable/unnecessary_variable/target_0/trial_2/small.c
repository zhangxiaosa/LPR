struct p {
  int ab;
  signed q : 22;
};
int u;
struct p v[1];
struct p w = {0x1C87E74FL, 816};
int main() {
  for (; u <= 1; u += 1) {
    struct p a = {0x1C87E74FL, 816};
    v[0] = a;
  }
  int j = v[0].q;
  printf("checksum = %X\n", j);
  return 0;
}