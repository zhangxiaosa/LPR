
typedef long a;
typedef a *d;

a fn1() {
  return 0;
}

d fn2() {
  d f = &fn1;
  return f;
}

int main() {
  return 0;
}
