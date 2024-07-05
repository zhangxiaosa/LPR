unsigned i;

unsigned fn3(int p1) {
  int l;
  short m = 0x809C;
  unsigned o = 0xE576516E;
  if (i)
    printf("l_1179=%d\n", l);
  unsigned long temp1 = 0x60781BCD;
  unsigned long temp2 = 4294967287;
  unsigned long temp3 = temp1 >= m ^ temp2;
  p1 = temp3 - o;
  if (i)
    printf("l_1179=%d\n", l);
  return p1;
}

int fn4() {
  if (fn3(1))
    ;
}

int main() {
  fn4();
}