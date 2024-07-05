int f;

char fn1() {
  if (f) {
    if (f) {
      goto i;
    }
    // Inlined function code starts here
    if (f) {
      if (f) {
        goto i;
      }
      // Inlined function code starts here
      if (f) {
        if (f) {
          goto i;
        }
        // Inlined function code starts here
        ...
        // ... repeated inlined function code for fn1
        ...
        // Inlined function code ends here
      }
    }
  }
}

int main() {}