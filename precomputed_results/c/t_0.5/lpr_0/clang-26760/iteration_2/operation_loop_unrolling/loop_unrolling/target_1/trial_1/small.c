int g;

int main() {
  int i;
  int j = 0x24F96B7B;
  unsigned k;

  // Loop unrolling
  unsigned f;
  f = true;

  // Loop body unrolled 4 times
  ;
  ;
  ;
  ;

  f = false; // Exit the loop

q:
  k = k >> 1;
  if (g) {
    k = k << j;
    goto q;
  }
}