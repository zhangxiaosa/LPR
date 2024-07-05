typedef long d __attribute__((__vector_size__(sizeof(long))));

long fn2_optimized() {
  long c = fn1;
  return c;
}

int main() {
  long optimized_c = fn2_optimized();
  // Use optimized_c in further program logic.
  return 0;
}