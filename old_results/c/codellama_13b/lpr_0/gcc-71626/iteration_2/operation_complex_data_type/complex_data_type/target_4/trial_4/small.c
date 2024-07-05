
long fn1() {
  // function body
}

typedef struct {
  long a;
  long b;
} d;

d fn2() {
  d result;
  result.a = fn1();
  result.b = fn1();
  return result;
}

int main() {
  // main function body
}
