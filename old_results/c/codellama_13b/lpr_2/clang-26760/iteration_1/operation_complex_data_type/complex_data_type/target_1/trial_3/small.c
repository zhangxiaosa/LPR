
int f;
int fn1() {
  unsigned j_high = 0x24F96B7BL;
  unsigned j_low = 0x00000001;
  for (f = 0; f;) {
    j_high = j_high >> 1;
    j_low = j_low << 1;
    goto q;
  }
}
int main() {}
