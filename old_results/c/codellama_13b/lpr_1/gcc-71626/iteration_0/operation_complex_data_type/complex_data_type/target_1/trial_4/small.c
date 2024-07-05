
#include <stdio.h>

typedef long a;

fn1() {}

typedef a d __attribute__((__vector_size__(sizeof(long))));

d fn2() {
  long c = fn1;
  d f = {c};
  return f;
}

int main() {
  // Decompose the d type into variables with primary data types
  long arr[d.size];
  for (int i = 0; i < d.size; i++) {
    arr[i] = d[i];
  }

  // Use the decomposed variables in the program
  for (int i = 0; i < d.size; i++) {
    printf("%ld\n", arr[i]);
  }

  return 0;
}
