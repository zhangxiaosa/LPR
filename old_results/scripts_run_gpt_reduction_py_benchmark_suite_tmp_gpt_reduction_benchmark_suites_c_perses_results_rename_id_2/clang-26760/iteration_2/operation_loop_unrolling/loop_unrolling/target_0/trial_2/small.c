int g;
int main() {
  int j = 0x24F96B7BL;
  unsigned k;
  if (j)
    --j;
q:
  k = k >> 1;
  k = k << j;
  k = k >> 1;
  k = k << j;
  goto q;
}