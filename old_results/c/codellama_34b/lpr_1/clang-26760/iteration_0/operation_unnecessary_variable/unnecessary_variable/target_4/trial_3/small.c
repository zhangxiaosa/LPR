
int main() {
  int i;
  int j = 0x24F96B7BL;
  int k = 0;
  for (; j; --j)
    ;
  i = j;
  if (i) {
    k = j << j;
    goto q;
  }
}
