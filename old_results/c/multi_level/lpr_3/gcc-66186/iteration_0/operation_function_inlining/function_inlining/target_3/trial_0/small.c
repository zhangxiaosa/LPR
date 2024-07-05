#include <iostream>

typedef signed a;
typedef short b;
typedef int c;
typedef unsigned d;
typedef unsigned short e;
typedef unsigned f;

c g;
c h;

c fn1(e p1, d p2, e p3) {
  c s = 0x57638FF4L;
  c t = 1L;
  {
    c ad = -7L;
    a ae = 0xA3L;
    c p1 = 0x9A5DL;
    c p2 = g;
    c p3 = s;
    e p4 = 0x30A04A8FL;
    c p5 = g;
    
    // Inlined code from fn4
    b ak[8];
    for (p2 = 0; p2 <= 7; p2 += 1) {
      for (p4 = 0; p4 <= 7; p4 += 1) {
        if (h < 0) {
          for (p4 = 0; p4 <= 7; p4 += 1) {
            if (ak[p3]) {
              break;
            }
          }
        }
      }
    }
    
    return t;
  }
}

b fn3(a p1, a p2, a p3, e p4, c p5) {
  c ad = -7L;
  a ae = 0xA3L;
  
  // Inlined code from fn4
  b ak[8];
  for (p2 = 0; p2 <= 7; p2 += 1) {
    for (p4 = 0; p4 <= 7; p4 += 1) {
      if (h < 0) {
        for (p4 = 0; p4 <= 7; p4 += 1) {
          if (ak[p3]) {
            break;
          }
        }
      }
    }
  }
  
  return ae;
}

c fn5() {
  c n = 1L;
  f o = 0x5A683F60L;
  {
    c ad = -7L;
    a ae = 0xA3L;
    c p1 = 0x9A5DL;
    c p2 = g;
    c p3 = 0x57638FF4L;
    e p4 = 0x30A04A8FL;
    c p5 = g;
    
    // Inlined code from fn4
    b ak[8];
    for (p2 = 0; p2 <= 7; p2 += 1) {
      for (p4 = 0; p4 <= 7; p4 += 1) {
        if (h < 0) {
          for (p4 = 0; p4 <= 7; p4 += 1) {
            if (ak[p3]) {
              break;
            }
          }
        }
      }
    }
    
    if (fn4(p1, p2, p3, p4, p5)) ; // Remove this line

    return ae;
  }
  return o;
}

int main() {
  fn5();
}