int d;
int e;

char fn1() {
  int h = 6L;
  if (e) {
    d = h;
  } else {
    while (!e) {
      // Loop unrolling
      d = h;
      e = 1;
    }
  }
  
  return 0xEEACFBBFL;
}

int main() {}