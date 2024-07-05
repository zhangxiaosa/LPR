
int g;

int fn1() {
  int i;
  unsigned char j_1 = 0x24;
  unsigned char j_2 = 0xF9;
  unsigned char j_3 = 0x6B;
  unsigned char j_4 = 0x7B;
  unsigned char j_5 = 0xL;
  unsigned char k_1;
  unsigned char k_2;
  unsigned char k_3;
  unsigned char k_4;
  unsigned char k_5;
  unsigned char l = 1;
  unsigned char m = j_5;
  unsigned char n = g;
  unsigned char o = n;

q:
  k_1 = k_1 >> l;
  k_2 = k_2 >> l;
  k_3 = k_3 >> l;
  k_4 = k_4 >> l;
  k_5 = k_5 >> l;
  i = o;
  if (i) {
    k_1 = k_1 << m;
    k_2 = k_2 << m;
    k_3 = k_3 << m;
    k_4 = k_4 << m;
    k_5 = k_5 << m;
    goto q;
  }
}

int main() {}
