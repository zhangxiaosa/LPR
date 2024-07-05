int w;
int ac = 1;
int main() {
  int an;
  for (w = 3; w; w -= 1)
    if ((an = w) == 250) {
      if (((0xBCD1 - (1 - an - 0xECL)) - 1) & 1)
        ;
    }
  printf("checksum = %d\n", ((0xBCD1 - (1 - an - 0xECL)) - 1) & 1);
  return 0;
}
