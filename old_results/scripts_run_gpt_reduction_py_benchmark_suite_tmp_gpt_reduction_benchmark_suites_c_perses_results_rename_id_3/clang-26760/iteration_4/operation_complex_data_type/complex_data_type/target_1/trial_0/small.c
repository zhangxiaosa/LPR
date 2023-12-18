unsigned g = 1;

int main() {
  unsigned j = 0x24F96B7B;
  unsigned k = 0;

  if (j)
    --j;

  while (g) {
    k >>= 1;

    if (g) {
      k <<= j;
    }
    else {
      break;
    }
  }

  // Rest of the program (if any)

  return 0;
}