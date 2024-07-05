struct h {
  int i;
  long j;
  int k;
};

unsigned fn2() {
  struct h p;
  
  // Inlined content of fn1
  p.k;
w:
  goto w;

  // Infinite loop removed

  // Return value not specified in the original program,
  // so returning 0 by default
  return 0;
}
