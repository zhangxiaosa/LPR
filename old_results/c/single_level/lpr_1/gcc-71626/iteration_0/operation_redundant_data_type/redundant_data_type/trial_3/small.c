typedef long a;
fn1() {}

a fn2() {
  a c = fn1;
  __vector_size__(sizeof(a)) f = {c};
  return f;
}

main() {}