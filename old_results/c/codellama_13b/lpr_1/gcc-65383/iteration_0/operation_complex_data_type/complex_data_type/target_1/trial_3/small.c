c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_ELEMENTS 100

uint32_t h[NUM_ELEMENTS];

int main() {
  for (int i = 0; i < NUM_ELEMENTS; i++) {
    h[i] = i * i;
  }

  for (int i = 0; i < NUM_ELEMENTS; i++) {
    printf("%u\n", h[i]);
  }

  return 0;
}
