int main() {
  int j = 0x24F96B7BL;
  unsigned k = 0;
  
  while (j) {
    k = k >> 1;
    k = k << j;
    --j;
  }
}