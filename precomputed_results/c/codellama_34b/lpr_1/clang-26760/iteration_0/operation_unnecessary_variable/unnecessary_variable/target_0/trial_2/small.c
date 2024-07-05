
int g;
int main() {
  int i;
  int j = 0x24F96B7BL;
  for (; j; --j)
    ;
  int n = g;
q:;
  i = n;
  if (i) {
    i = i << j;
    goto q;
  }
}
