original_fn3(p1, p2);

original_u;

original_v;

static int original_w = 254;

original_ad1[][5][7] = {{8}, {8}, {{8}, 0x98}};

original_af;

original_fn4(p1, p2) { return p1 % p2; }

original_fn9() {
  original_ai[2];
  original_i;
  for (original_i = 0; original_i < 2; original_i++)
    original_ai[original_i] = 8;
  for (original_w = 1;;) {
    for (; original_i < 3; original_i += 4)
      ;
    for (original_af = 6; original_af >= 0; original_af -= 1)
      original_v = original_ai[0] ^= original_ad1[original_w + 1][original_w][original_af] = original_fn4(original_fn3(1, original_u--), 4294967295);
    return original_return_value;
  }
}

int main() {
  original_fn9();
  original_s;
  original_s = original_ad1[2][1][0];
  printf("s_unrolled_iter_1 = %d\n", original_s);
  return 0;
}