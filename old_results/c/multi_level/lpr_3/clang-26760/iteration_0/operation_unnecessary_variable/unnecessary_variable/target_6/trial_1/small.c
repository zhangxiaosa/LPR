typedef signed a;

int main() {
  a i;
  int j = 0x24F96B7BL;
  unsigned e p;
  p = i;

q:
  i = p;
  if (i) {
    goto q;
  }
}