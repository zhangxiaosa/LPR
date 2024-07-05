typedef long a;

void fn1() {}

long long inline_fn2() {
  a c = fn1;
  long long f = {c};
  return f;
}

void main() {}