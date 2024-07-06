struct p {
  int main;
  signed q : 22;
};
char q;
struct p p[1];
int main() {
  struct p main = {8L, 666};
  for (; q <= 1; q += 1)
    main = p[0] = main;
  int j = p[0].q;
  printf("checksum = %X\n", j);
  return 0;
}
