#include <iostream>

int g;
int h;

unsigned fn4(unsigned p2, unsigned short p3, unsigned p4) {
  short ak[8];
  unsigned temp_p2;
  unsigned temp_p4;

  // Unrolled loop iteration 1
  temp_p2 = 0;
  temp_p4 = 0;
  if (h < 0) {
    for (temp_p4 = 0; temp_p4 <= 7; temp_p4 += 1) {
      if (ak[p3])
        break;
    }
  }

  // Unrolled loop iteration 2
  temp_p2 = 1;
  temp_p4 = 0;
  if (h < 0) {
    for (temp_p4 = 0; temp_p4 <= 7; temp_p4 += 1) {
      if (ak[p3])
        break;
    }
  }

  // Unrolled loop iteration 3
  temp_p2 = 2;
  temp_p4 = 0;
  if (h < 0) {
    for (temp_p4 = 0; temp_p4 <= 7; temp_p4 += 1) {
      if (ak[p3])
        break;
    }
  }

  // Unrolled loop iteration 4
  temp_p2 = 3;
  temp_p4 = 0;
  if (h < 0) {
    for (temp_p4 = 0; temp_p4 <= 7; temp_p4 += 1) {
      if (ak[p3])
        break;
    }
  }

  // Unrolled loop iteration 5
  temp_p2 = 4;
  temp_p4 = 0;
  if (h < 0) {
    for (temp_p4 = 0; temp_p4 <= 7; temp_p4 += 1) {
      if (ak[p3])
        break;
    }
  }

  // Unrolled loop iteration 6
  temp_p2 = 5;
  temp_p4 = 0;
  if (h < 0) {
    for (temp_p4 = 0; temp_p4 <= 7; temp_p4 += 1) {
      if (ak[p3])
        break;
    }
  }

  // Unrolled loop iteration 7
  temp_p2 = 6;
  temp_p4 = 0;
  if (h < 0) {
    for (temp_p4 = 0; temp_p4 <= 7; temp_p4 += 1) {
      if (ak[p3])
        break;
    }
  }

  // Unrolled loop iteration 8
  temp_p2 = 7;
  temp_p4 = 0;
  if (h < 0) {
    for (temp_p4 = 0; temp_p4 <= 7; temp_p4 += 1) {
      if (ak[p3])
        break;
    }
  }

  return g;
}

int fn5() {
  if (fn4(4294967287UL, -7L, g))
    ;
  return g;
}

int main() {
  fn5();
}