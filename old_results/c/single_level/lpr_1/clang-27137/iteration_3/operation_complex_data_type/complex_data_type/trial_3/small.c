#include <stdio.h>

unsigned h;
short o;

int main() {
  short q_value = o;
  unsigned short q_sign = 1;

  while (q_value > 1) {
    q_value -= 1;
  }

  while (q_value > 1) {
    q_value -= 1;
  }

  while (q_value > 1) {
    q_value -= 1;
  }

  while (q_value > 1) {
    q_value -= 1;
  }

  while (q_value > 1) {
    q_value -= 1;
  }

  while (q_value > 1) {
    q_value -= 1;
  }

  h = q_value * q_sign;
  printf("checksum = %X\n", h);
  return 0;
}