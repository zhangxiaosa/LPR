
unsigned f;
int g;
int main() {
  int i;
  unsigned j_0 = 0x24F96B7BL;
  unsigned j_1 = 0x24F96B7BL >> 16;
  unsigned j_2 = 0x24F96B7BL >> 8;
  unsigned j_3 = 0x24F96B7BL >> 4;
  unsigned j_4 = 0x24F96B7BL >> 2;
  unsigned j_5 = 0x24F96B7BL >> 1;
  int n = g;
  while (n) {
    k = k >> 1L;
    i = n;
    if (i)
      k = k << j_0;
    else if (i == 0)
      k = k << j_1;
    else if (i == 1)
      k = k << j_2;
    else if (i == 2)
      k = k << j_3;
    else if (i == 3)
      k = k << j_4;
    else if (i == 4)
      k = k << j_5;
  }
}
