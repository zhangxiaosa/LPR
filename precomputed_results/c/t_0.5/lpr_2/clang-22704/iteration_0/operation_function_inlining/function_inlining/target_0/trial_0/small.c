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
    a h = 6L;
    if (f.e) {
      a h = 6L;
      if (f.e) {
        // ... continue inlining the code as necessary
      }
      else {
        f.d = h;
        // ... continue inlining the code as necessary
      }
    }
    else {
      // ... continue inlining the code as necessary
    }
  }
  else {
    // ... continue inlining the code as necessary
  }
  b j;
  return j;
}

int main() {}
