int d;
int e;

long fn1() {
  if (e) {
    d = 6L;
    if (e) {
      d = 6L;
      if (e) {
        d = 6L;
        // continue unrolling as necessary...
      }
    }
  }

  return 0xEEACFBBFL;
}

int main() {}