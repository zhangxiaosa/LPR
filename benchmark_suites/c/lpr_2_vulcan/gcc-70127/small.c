struct p {
  int main;
  int q : 22;
};
char q;
struct p p[1];
int main() {
  struct p main = {8L, 666};
  for (; q <= 1; q += 1)
    main = p[0] = main;
  printf("checksum = %X\n", p[0].q);
  return 0;
}
