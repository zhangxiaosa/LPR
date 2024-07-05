typedef int a;

typedef char b;

struct c {
  a d;
  a e;
};

struct c f;

b fn1() {
  if (f.e) {
    f.d = 6L;
    for (int i = 0; i < 3; i++) { // Unrolled loop 3 times
      b j = 0xEEACFBBFL;
      return j;
    }
  }

  for (int i = 0; i < 3; i++) { // Unrolled loop 3 times
    b j;
    return j;
  }
}

int main() {}