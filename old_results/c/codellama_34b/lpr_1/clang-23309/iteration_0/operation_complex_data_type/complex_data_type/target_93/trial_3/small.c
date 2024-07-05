
#include <stdio.h>

void fn1(short input_value1, int input_value2) {
  printf("checksum = %X\n", input_value1);
}

short fn2(short input_value1, short input_value2) {
  return input_value1 - input_value2;
}

short fn3(short input_value1, short input_value2) {
  return input_value1 - input_value2;
}

short fn5(short input_value1, short input_value2) {
  return input_value2;
}

short fn9(short input_value1, char *input_value2) {
  p = input_value1;
}

void fn10(short input_value1, short input_value2) {
  short result = 0x2F2F6D26;
  unsigned char ag = 248;
  fn11(2, ag, input_value2, 1);
  return result;
}

unsigned char fn11(unsigned char input_value1, short input_value2, short input_value3, short input_value4) {
  short result = 0;
  for (unsigned char w = 3; w; w--) {
    short an = 250;
    short p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822D;
    short ao = 0xBCD1;
    if (fn2(fn3(ao, fn6(am, an)), p2) & 1) {
      result = 1;
      break;
    }
  }
  return result;
}

int main() {
  fn13();
  fn9(v, "g_170");
  fn1(p, 0);
  return 0;
}
