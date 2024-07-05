#include <stdio.h>

int h;
short o;

int main() {
  short q_value = o;
  short* q_ptr = &q_value;

  while (*q_ptr > 1L)
    (*q_ptr) -= 1;

  while (*q_ptr > 1L)
    (*q_ptr) -= 1;

  while (*q_ptr > 1L)
    (*q_ptr) -= 1;

  while (*q_ptr > 1L)
    (*q_ptr) -= 1;

  while (*q_ptr > 1L)
    (*q_ptr) -= 1;

  while (*q_ptr > 1L)
    (*q_ptr) -= 1;

  h = *q_ptr;

  printf("checksum = %X\n", h);
  return 0;
}