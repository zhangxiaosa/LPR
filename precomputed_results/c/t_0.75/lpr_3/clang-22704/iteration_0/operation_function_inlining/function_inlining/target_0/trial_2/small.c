typedef int a;
typedef char b;
struct c {
  a d;
  a e;
};
struct c f;
b fn1() {
  a h = 6L;
  if (f.e) {
    a h_1 = 6L;
    if (f.e) {
      f.d = h_1;
      a h_2 = 6L;
      if (f.e) {
        f.d = h_2;
        a h_3 = 6L;
        if (f.e) {
          f.d = h_3;
          // ... continue inlining the function recursively if needed
        }
      }
    }
  }

  b j;
  return j;
}

int main() {}
