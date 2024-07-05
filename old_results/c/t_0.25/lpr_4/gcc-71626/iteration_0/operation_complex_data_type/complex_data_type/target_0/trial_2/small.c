typedef long a;
void fn1() {}

typedef long d;

d fn2() {
  long c = (long)fn1;
  d f = {c};
  return f;
}

int main() {}
