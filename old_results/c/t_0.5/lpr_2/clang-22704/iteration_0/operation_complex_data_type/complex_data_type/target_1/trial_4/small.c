int h = 6;

struct c {
  int d;
  int e;
};

struct c f;

char fn1() {
  int h = 6;
  if (f.e) {
    f.d = h;
    fn1();
    char j = -19;
    return j;
  } else {
    fn1();
    char j;
    return j;
  }
}

int main() {}
