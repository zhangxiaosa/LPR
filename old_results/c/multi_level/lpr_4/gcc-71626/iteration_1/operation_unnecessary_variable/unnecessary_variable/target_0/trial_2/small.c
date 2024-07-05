#include <cstddef>

typedef long __attribute__((__vector_size__(sizeof a))) a_vector;

a_vector fn2() {
  a_vector f = {0};
  return f;
}

int main() {
  return 0;
}