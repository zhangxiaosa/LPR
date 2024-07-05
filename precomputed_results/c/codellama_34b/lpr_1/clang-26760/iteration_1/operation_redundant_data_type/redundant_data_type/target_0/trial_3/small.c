
int g;
int main() {
  int i;
  int j = 0x24F96B7BL;
  int n = g;
q:
  n = n >> 1;
  i = n;
  if (i) {
    n = n << j;
    goto q;
  }
}
