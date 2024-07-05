struct c {
  int d;
  int e;
};

struct c f;

char fn1() {
  if (f.e) {
    f.d = 6L;
    return 0xEEACFBBFL;
  }

  return 0xEEACFBBFL;
}

int main() {}
