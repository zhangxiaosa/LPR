char u;
typedef struct {
  int main;
  signed q : 22;
} a;
a q[1];
int main() {
  a a = {8L, 666};
  for (; u <= 1; u += 1)
    a = q[0] = a;
  printf("checksum = %X\n", q[0].q);
  return 0;
}
