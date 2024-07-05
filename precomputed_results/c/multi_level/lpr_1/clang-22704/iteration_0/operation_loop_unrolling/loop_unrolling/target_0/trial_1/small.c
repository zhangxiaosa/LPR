typedef int a;

typedef char b;

struct c {
  a d;
  a e;
};

struct c f;

b fn1() {
  while (f.e) {
    f.d = 6L;
    f.e--;
  }

  b j;
  return j;
}

int main() {}