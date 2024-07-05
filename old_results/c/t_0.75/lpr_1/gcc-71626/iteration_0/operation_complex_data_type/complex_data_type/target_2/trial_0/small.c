typedef long a;

void fn1() {}

long inline_fn2() {
  a c = (a)fn1;
  long f = (long)c;
  return f;
}

int main() {}
