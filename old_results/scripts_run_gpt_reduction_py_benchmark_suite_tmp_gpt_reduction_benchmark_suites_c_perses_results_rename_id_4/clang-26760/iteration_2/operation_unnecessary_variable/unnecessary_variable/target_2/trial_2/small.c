int main() {
  int j = 0x24F96B7B;
  for (; j; --j)
    ;
q:
  k = k >> 1;
  k = k << j;
  goto q;
}