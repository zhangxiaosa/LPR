typedef char b;
int d;
int e;

b fn1() {
  if (e) {
    // Unrolled loop iteration 1
    d = 6L;
    b j = 0xEEACFBBFL;
    return j;
  } else {
    // Unrolled loop iteration 0
    b j;
    return j;
  }
}

int main() {}