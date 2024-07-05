typedef long a;

void fn1() {}

long inline_fn2() {
  long c = (long)fn1;
  long f = c;
  return f;
}

int main() {}