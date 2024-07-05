int f;
int main() {
  if (f) {
    goto i;
  }
  // fn1() body start
  if (f) {
    goto i;
  }
  char j;
  return j;
  // fn1() body end

i:
  f = 6L;
  // fn1() body start
  if (f) {
    goto i;
  }
  j = 0xEEACFBBFL;
  return j;
  // fn1() body end
}