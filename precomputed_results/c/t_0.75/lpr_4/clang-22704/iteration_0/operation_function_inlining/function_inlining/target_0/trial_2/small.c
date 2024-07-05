int main() {
  typedef char b;
  struct c {
    int d;
    int e;
  };
  struct c f;
  if (f.e) {
    f.d = 6L;
    if (f.e) {
      b j;
      return j;
    }
    return 0xEEACFBBFL;
  }
}