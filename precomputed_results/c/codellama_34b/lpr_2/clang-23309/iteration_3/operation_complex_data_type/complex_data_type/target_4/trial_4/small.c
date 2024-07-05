
#define MAX_P1 0xFFFF
#define MAX_P2 0xFFFF

static unsigned short lookup_table[MAX_P1][MAX_P2];

int fn4(unsigned p1, unsigned p2) {
  if (p1 < MAX_P1 && p2 < MAX_P2) {
    return lookup_table[p1][p2];
  } else {
    unsigned short p1_high = p1 >> 16;
    unsigned short p1_low = p1 & 0xFFFF;
    unsigned short p2_high = p2 >> 16;
    unsigned short p2_low = p2 & 0xFFFF;
    return p1_high + p1_low + p2_high + p2_low;
  }
}
