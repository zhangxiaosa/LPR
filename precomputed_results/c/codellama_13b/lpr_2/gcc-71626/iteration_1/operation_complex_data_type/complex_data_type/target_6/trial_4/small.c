
typedef struct {
  long v[sizeof(long)];
} d;

d fn1() {
  d f;
  f.v[0] = 0;
  f.v[1] = 1;
  f.v[2] = 2;
  f.v[3] = 3;
  return f;
}

d fn2() {
  d f = {fn1};
  return f;
}

d main() {
  d f = fn2();
  printf("%ld %ld %ld %ld\n", f.v[0], f.v[1], f.v[2], f.v[3]);
  return 0;
}
