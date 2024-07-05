unsigned j;
struct p {
  int ab;
  signed q : 22;
};
unsigned u;
{ int ab; signed q : 22; } v[1];
{ int ab; signed q : 22; } w = {0x1C87E74FL, 816};
int main() {
  int i;
  { int ab; signed q : 22; } a = {8L, 666};
  signed p2;
  for (p2 = 0; p2 >= 0; p2 -= 1)
    for (; u <= 1; u += 2) {
      a = v[p2] = w;
      v[p2] = a;
    }
  for (i = 0; i < 1; i++)
    j = v[i].q;
  printf("checksum = %X\n", j);
  return 0;
}