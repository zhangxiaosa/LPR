typedef int c;

typedef unsigned d;

typedef unsigned e;

typedef unsigned f;

c fn3(c p1, c p2) { return p2 == 0 || p1 && p2 ? p1 : p1 % p2; }

unsigned fn4(unsigned p1, int p2) {}

signed o;

signed p;

short q;

static signed r = 0x2A52L;

f s = 0x03F238A4L;

unsigned t[7][1];

signed u[6];

static c fn7(short p1) {
  c ac;
  ac = fn3(p1, o);
  if (s) {
    c ad;
    short ae = 0x809CL;
    f af = 0;
    for (; p1; --p1)
      ;
    for (; af <= 49; af += 8) {
      f ah;
      if (p1 && (6 + p1 || fn4(ad = fn3(p1, 0xBC2AB98CL), 9)))
        ;
      else {
        e ai = ac;
        ah = ai;
        if (!r) {
          printf("l_1179=%lld\n", (long long)ad);
          break;
        }
      }
      p1 = (0x60781BCDL >= fn3(fn3(ae, p1) > 0xB5L, p1) != p1 ^ 4294967287UL) -
           ah;
      p = p1;
      ac = fn3(0x7D765DB6L, u[4]);
    }
  } else {
    d aj[3];
    t[2][0] = fn3(fn3(aj[1], q), 0x9CFB623FL);
  }
  return p1;
}

static c fn8() {
  if (fn7(1))
    ;
}

int main() { fn8(); }
