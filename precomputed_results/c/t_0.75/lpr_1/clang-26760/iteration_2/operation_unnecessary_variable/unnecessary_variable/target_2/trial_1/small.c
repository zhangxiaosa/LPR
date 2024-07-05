int g;

int main() {
  int j = 0x24F96B7BL;

  if (j)
    --j;
q:
  if (g) {
    j = j << 1;
    goto q;
  }
}
