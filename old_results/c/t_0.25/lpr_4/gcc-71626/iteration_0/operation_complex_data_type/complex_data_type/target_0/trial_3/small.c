typedef long a;
void fn1() {}

typedef long d;

d fn2() {
  a c = (a)fn1;
  d f = {c};
  return f;
}

int main() {}
