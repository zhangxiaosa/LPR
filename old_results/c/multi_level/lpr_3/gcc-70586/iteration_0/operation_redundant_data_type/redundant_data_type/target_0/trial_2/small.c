typedef int b;
typedef unsigned c;
unsigned i;

unsigned fn3(short);
b fn4() {
  if (fn3((short)1))
    ;
}

unsigned fn3(short p1) {
  b l;
  short m = 0x809CL;
  unsigned o = 0xE576516EL;
  p1 = (0x60781BCDL >= m ^ 4294967287UL) - o;
  return p1;
}

int main() { 
  fn4(); 
}