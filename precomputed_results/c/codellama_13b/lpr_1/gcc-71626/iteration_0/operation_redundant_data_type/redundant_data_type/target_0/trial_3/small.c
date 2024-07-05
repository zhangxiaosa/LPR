
long a;

void fn1() {}

struct d {
  long c;
};

d fn2() {
  long c = fn1;
  d f = {c};
  return f;
}

int main() {}
