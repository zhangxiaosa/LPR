
#include <stdio.h>

// Decompose the struct h into its individual components
int i;
long j;
unsigned k;

// Function to initialize the struct h
void init_struct_h(struct h* p) {
  p->i = 0;
  p->j = 0;
  p->k = 0;
}

// Function to modify the struct h
void modify_struct_h(struct h* p) {
  p->i = 10;
  p->j = 20;
  p->k = 30;
}

int main() {
  // Initialize the struct h
  struct h p;
  init_struct_h(&p);

  // Modify the struct h
  modify_struct_h(&p);

  // Print the modified struct h
  printf("p.i: %d\n", p.i);
  printf("p.j: %ld\n", p.j);
  printf("p.k: %u\n", p.k);

  return 0;
}
