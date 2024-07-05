#include <stdio.h>

typedef long a_vector_element;
#define VECTOR_SIZE 8

struct a_vector {
  a_vector_element elements[VECTOR_SIZE];
};

a_vector_element fn2_element() {
  a_vector_element f_element = (a_vector_element)fn1;
  return f_element;
}

int main() {
  a_vector_element f_element = fn2_element();
  // Use f_element as needed
  return 0;
}