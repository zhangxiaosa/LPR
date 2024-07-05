int g;
int main() {
  int j = 0x24F96B7B;
  unsigned k;
  if (j)
    --j;

  k = k >> 1;
  if (g) {
    k = k << j;
    k = k >> 1;
    if (g) {
      k = k << j;
      k = k >> 1;
      if (g) {
        k = k << j;
        k = k >> 1;
        if (g) {
          k = k << j;
          goto q;
        }
      }
    }
  }

  // Unrolled iterations of the loop body
  k = k >> 1;
  if (g) {
    k = k << j;
    k = k >> 1;
    if (g) {
      k = k << j;
      k = k >> 1;
      if (g) {
        k = k << j;
        k = k >> 1;
        if (g) {
          k = k << j;
          goto q;
        }
      }
    }
  }

  k = k >> 1;
  if (g) {
    k = k << j;
    k = k >> 1;
    if (g) {
      k = k << j;
      k = k >> 1;
      if (g) {
        k = k << j;
        k = k >> 1;
        if (g) {
          k = k << j;
          goto q;
        }
      }
    }
  }

  k = k >> 1;
  if (g) {
    k = k << j;
    k = k >> 1;
    if (g) {
      k = k << j;
      k = k >> 1;
      if (g) {
        k = k << j;
        k = k >> 1;
        if (g) {
          k = k << j;
          goto q;
        }
      }
    }
  }

  k = k >> 1;
  if (g) {
    k = k << j;
    k = k >> 1;
    if (g) {
      k = k << j;
      k = k >> 1;
      if (g) {
        k = k << j;
        k = k >> 1;
        if (g) {
          k = k << j;
          goto q;
        }
      }
    }
  }
}