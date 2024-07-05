typedef long a;

void fn1() {}

a fn2() {
  a f = {fn1};
  return f;
}

int main() {}
