int k;
unsigned l;
unsigned fn3(p1) {
  int o;
  for (; l >= 4; l -= 4) {
    for (k = 0; k >= -27; k = k - 18) {
      p1 = o - p1;
      p1 = o - p1;
      p1 = o - p1;
      p1 = o - p1;
    }
  }

  // Handle remaining iterations (less than 4)
  for (; l; l--) {
    for (k = 0; k >= -27; k = k - 18) {
      p1 = o - p1;
    }
  }

  return p1;
}

int main() {}