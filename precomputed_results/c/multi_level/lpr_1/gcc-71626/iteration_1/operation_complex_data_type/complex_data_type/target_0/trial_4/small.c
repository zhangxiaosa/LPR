#include <stdint.h>

#define VECTOR_SIZE (sizeof(long) / sizeof(int64_t)) // Assuming long is 8 bytes

typedef int64_t vector_element;
typedef vector_element d[VECTOR_SIZE];

void fn1() {}

d fn2() {
  d f = {0}; // Initialize all elements to 0
  return f;
}

int main() {
  return 0;
}
