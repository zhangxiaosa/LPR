typedef int b;
typedef unsigned c;
typedef unsigned d;
c i;

c fn3(p1) {
  b l;
  short m = 0x809C;
  d o = 0xE576516EL;
  if (i)
    printf("l_1179=%lld\n", l);
  p1 = (0x60781BCDL >= m ^ 4294967287UL) - o;
  if (i)
    printf("l_1179=%lld\n", l);
  return p1;
}

b fn4() {
  if (fn3(1))
    ;
}

int main() { 
  fn4(); 
}