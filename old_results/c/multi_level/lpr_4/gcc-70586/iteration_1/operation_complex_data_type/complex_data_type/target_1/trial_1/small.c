unsigned i;

unsigned fn3(unsigned p1) {
  unsigned unsigned_int = 0xE576516E;
  printf("l_1179=%u\n", 0);
  unsigned optimized_p1 = (0x60781BCD >= 0x809C ^ 4294967287UL) - unsigned_int;
  printf("optimized_p1=%u\n", optimized_p1); // Added for debugging
  if (i)
    printf(0);
  return optimized_p1;
}

int fn4() {
  if (fn3(1))
    ;
}

int main() { fn4(); }
