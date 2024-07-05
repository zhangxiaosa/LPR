struct {
  int d;
  int e;
} f;

char fn1() {
  int h = 6L;
  if (0) {
    f.d = 6L;
    return fn1();
  } else {
    return fn1();
  }
}

int main() {}.
