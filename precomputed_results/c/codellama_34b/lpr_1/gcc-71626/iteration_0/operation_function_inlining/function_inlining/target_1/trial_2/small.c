
typedef long a;

fn1() {}

#define fn2() (a) { fn1(); }

int main() {
  a c = fn1();
  d f = {c};
  return f;
}
