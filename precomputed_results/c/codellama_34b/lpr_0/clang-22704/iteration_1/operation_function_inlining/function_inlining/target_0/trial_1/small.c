
<SYS>

int d;
int e;

// Optimized version of fn1() with function inlining
int fn1_optimized() {
  if (e) {
    d = 6L;
    return 0xEEACFBBFL;
  } else {
    fn1_optimized();
    return 0xEEACFBBFL;
  }
}

int main() {}

</SYS>
