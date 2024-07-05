char fn2(char p1, int p2) { 
  return p1; 
}

short fn3(short p1, short p2) { 
  return p2; 
}

unsigned p;
unsigned u;
unsigned v_0_3;
int main() {
  int d = 2L;
  for (; u < 51; ++u) {
    d = fn2(v_0_3 = fn3(4L, d), 3);
  }
  p = v_0_3;
  printf("checksum = %X\n", p);
  return 0;
}