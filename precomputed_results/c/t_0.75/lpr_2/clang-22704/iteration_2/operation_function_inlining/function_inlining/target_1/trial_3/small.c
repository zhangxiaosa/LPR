int f_d;

int main() {
  if (f_d)
    goto i;
  if (f_d) {
    goto i;
  }
  return 0xEEACFBBF;

i:
  f_d = 6L;
  if (f_d) {
    goto i;
  }
  return 0xEEACFBBF;
}