unsigned u;
static unsigned w = 254U;
signed ad_dim1[][5][7] = {{8}, {8}, {{8}, 0x98}};

int fn2(signed p1, signed p2) {
  return p1;
}

signed optimized_fn9() {
  for (w = 1;;) {
    for (int j = 0; j < 4; j++) {
    }
    v = (ad_dim1[w + 1][w][af] = fn4(fn2(1, fn2(3, u--)), 4294967295));
    return 0;
  }
}

int main() {
  printf("checksum = %x\n", ad_dim1[2][1][0]);
  return 0;
}