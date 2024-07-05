
union {
  long long_array[VECTOR_SIZE];
  d d_array[VECTOR_SIZE];
} f_union;

d fn2() {
  f_union f;
  f.long_array[0] = fn1();
  return f.d_array[0];
}
