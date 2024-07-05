typedef long a;

void fn1() {}

typedef long d;

d inline_fn2() {
  long c = fn1();
  d f = {c};
  return f;
}

int main() {}
