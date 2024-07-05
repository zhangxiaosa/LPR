void fn1(unsigned p1, int p2) { printf("checksum = %X\n", p1); }

char fn2(char p1, int p2) { return p1; }

short fn3(short p1, short p2) { return p2; }

unsigned fn4(unsigned p1, unsigned p2) { return p1 + p2; }

unsigned p;
unsigned u;
unsigned v_00;
unsigned v_01;
unsigned v_02;
unsigned v_03;

short fn11() {
  int b = 0L;
  int d = 2L;
  
  for (; u < 51; ++u) {
    unsigned e[9];
    e[0] = 0x9EE7F9D1C772505BLL;
    d = fn4(fn2(v_03 = fn3(4L, d), 3), e[0]);
  }
  
  return b;
}

int main() {
  int i, j;
  int f = 0;
  
  fn11();
  
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 4; j++) {
      if (i == 0 && j == 0)
        p = v_00;
      else if (i == 0 && j == 1)
        p = v_01;
      else if (i == 0 && j == 2)
        p = v_02;
      else if (i == 0 && j == 3)
        p = v_03;
    }
  }
  
  fn1(p, f);
  
  return 0;
}