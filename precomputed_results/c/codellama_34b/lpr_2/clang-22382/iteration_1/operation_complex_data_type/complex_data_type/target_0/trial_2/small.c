
#include <stdio.h>

// Structure definition
struct h {
  int i;
  long j;
  int k;
};

// Function to initialize the structure
void init_struct(struct h *p) {
  p->i = 0;
  p->j = 0;
  p->k = 0;
}

// Function to print the structure
void print_struct(struct h *p) {
  printf("i: %d, j: %ld, k: %d\n", p->i, p->j, p->k);
}

int main() {
  // Initialize the structure
  struct h p;
  init_struct(&p);

  // Print the structure
  print_struct(&p);

  // Modify the structure
  p.i = 10;
  p.j = 20;
  p.k = 30;

  // Print the modified structure
  print_struct(&p);

  return 0;
}
