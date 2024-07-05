
typedef long d_vector;

d_vector fn1_return;
d_vector fn2_return;
d_vector main_return;

d_vector fn1() {}
d_vector fn2() {
  d_vector f = {fn1};
  return f;
}
d_vector main() {}
