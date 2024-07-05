typedef int a;

struct c {
  a d;
  a e;
};

struct c f;

char fn1() {
  while (!f.e) {
    f.d = 6L;
    f.e = 1;
  }

  char j = 0xEEACFBBFL;
  return j;
}

int main() {}
