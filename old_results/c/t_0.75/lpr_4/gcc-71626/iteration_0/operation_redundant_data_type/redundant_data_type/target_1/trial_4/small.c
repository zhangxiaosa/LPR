typedef long a;

void fn1() {}

typedef long d;

long fn2() {
  long c = (long)fn1;
  long f = c;
  return f;
}

int main() {}