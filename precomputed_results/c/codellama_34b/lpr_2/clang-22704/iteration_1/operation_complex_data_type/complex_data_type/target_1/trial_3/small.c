
int fn1_part1() {
  if (e)
    goto i;
  return 0xEEACFBBFL;
}

int fn1_part2() {
  d = 0xEEACFBBFL;
  return 0xEEACFBBFL;
}

int fn1_part3() {
  return 0xEEACFBBFL;
}

int fn1() {
  int result = fn1_part1();
  if (result == 0xEEACFBBFL) {
    result = fn1_part2();
  } else {
    result = fn1_part3();
  }
  return result;
}
