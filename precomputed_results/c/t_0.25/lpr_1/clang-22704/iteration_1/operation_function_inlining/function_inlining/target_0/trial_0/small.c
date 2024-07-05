struct c {
  int d;
  int e;
};

struct c f;

int main() {
  if (f.e) {
    f.d = 6L;
    if (f.e) {
      f.d = 6L;
    }
  }

  return 0xEEACFBBFL;
}