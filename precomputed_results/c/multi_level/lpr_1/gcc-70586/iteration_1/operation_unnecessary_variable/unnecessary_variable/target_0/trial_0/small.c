unsigned fn3(short);
int fn4() {
  if (fn3(1))
    ;
}
unsigned fn3(short p1) {
  short m = 0x809C;
  unsigned o0 = 0xE576516E;
  p1 = 1 - o0;
  return p1;
}
int main() { fn4(); }
