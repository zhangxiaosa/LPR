long fn1_result;

void fn1() {
  // Function body remains empty
}

typedef long a;

typedef long d;

d fn2() {
  a c = (a)fn1;
  d f = {c};
  return f;
}

int main() {
  d f_result = fn2();
  // Function body remains empty
}