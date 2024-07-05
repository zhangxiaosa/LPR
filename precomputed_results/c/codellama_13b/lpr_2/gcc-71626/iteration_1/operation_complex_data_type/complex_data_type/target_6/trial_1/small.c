
typedef struct {
  long data[1];
} d;

d fn1() {
  return 0;
}

d fn2() {
  d f;
  f.data[0] = fn1();
  return f;
}

d main() {
  return 0;
}
