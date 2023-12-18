struct c {
  int d;
  int e;
};

struct c f;

char fn1() {
  // Loop unrolling: Unrolled loop by duplicating code and removing the conditional branch
  fn1();
  fn1();

  return 0xEEACFBBFL;
}

int main() {}
