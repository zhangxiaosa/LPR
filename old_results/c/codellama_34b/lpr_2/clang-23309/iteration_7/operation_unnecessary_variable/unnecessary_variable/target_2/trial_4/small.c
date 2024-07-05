
<SYS>

// The optimized program
int main() {
  short an = 0x294A;
  int tmp1 = ac || (an = 0);
  int tmp2 = 0xBCD1 - tmp1 & 1;
  int v_int = tmp2;
  printf("checksum = %d\n", v_int);
  return 0;
}

// Constant propagation
int main() {
  short an = 0x294A;
  int tmp1 = ac || (an = 0);
  int tmp2 = 65535 - tmp1 & 1;
  int v_int = tmp2;
  printf("checksum = %d\n", v_int);
  return 0;
}

// Copy propagation
int main() {
  short an = 0x294A;
  int tmp1 = ac || (an = 0);
  int tmp2 = tmp1 & 1;
  int v_int = tmp2;
  printf("checksum = %d\n", v_int);
  return 0;
}

// The optimized program with the target variable optimized out
int main() {
  short an = 0x294A;
  int tmp1 = ac || (an = 0);
  int tmp2 = tmp1 & 1;
  int v_int = tmp2;
  printf("checksum = %d\n", v_int);
  return 0;
}

// The optimized program with the unused variable optimized out
int main() {
  short an = 0x294A;
  int tmp1 = ac || (an = 0);
  int tmp2 = tmp1 & 1;
  printf("checksum = %d\n", tmp2);
  return 0;
}

</SYS>
