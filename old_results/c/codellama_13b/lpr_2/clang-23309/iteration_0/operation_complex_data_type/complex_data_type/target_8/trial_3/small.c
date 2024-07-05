
void fn9(int g, char *str, int ap) {
  int i = 0;
  int j = 0;
  while (str[i] != '\0') {
    if (str[i] == ' ') {
      j++;
    } else {
      g = g + 1;
      ap = ap + 1;
    }
    i++;
  }
  printf("checksum = %X\n", p);
}
