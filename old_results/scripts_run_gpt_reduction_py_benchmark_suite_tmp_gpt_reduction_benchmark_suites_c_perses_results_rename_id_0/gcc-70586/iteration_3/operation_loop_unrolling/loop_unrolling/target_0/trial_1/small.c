int fn2(int p1, int p2) { return p1; }
int fn3(int p1, int p2) { return p2 == 0 || p1 && p2 ? p1 : p1 % p2; }
int o;
int p;
static int r = 0x2A52L;
int s = 0x03F238A4L;
int t2;

static int fn7(short);

int fn7(short p1) {
  int ac;
  ac = fn3(p1, o);
  if (s) {
    int ad;
    unsigned af;
    for (; p1 >= 4; p1 -= 4) {
      // Loop unrolling 4 times
      for (af = 0; af <= 48; af += 8) {
        int ag_dim_1[8][6][5] = {1L};
        unsigned ah;
        if (fn2(p1, ag_dim_1[6][5][0] + p1 || p1 && fn3(ad = fn3(p1, 0xBC2AB98CL), 9))) {
          // Loop iteration 1
          ;
        } else {
          ah = ac;
          if (!r) {
            printf("l_1179=%%lld\n", ad);
            break;
          }
        }
        p1 = (0x60781BCDL >= fn3(fn3(p1, p1) > 0xB5L, p1) != p1 ^ 4294967287UL) - ah;
        p = p1;
      }
      // Loop iteration 2
      // ... repeat loop body ...
      // Loop iteration 3
      // ... repeat loop body ...
      // Loop iteration 4
      // ... repeat loop body ...
    }

    // Handle remaining iterations (less than 4)
    for (; p1; --p1) {
      // Loop body
    }
  } else {
    unsigned aj[3];
    t2 = fn3(aj[1], p);
  }
  return p1;
}

int main() {
  if (fn7(1)) {
    ;
  }
}