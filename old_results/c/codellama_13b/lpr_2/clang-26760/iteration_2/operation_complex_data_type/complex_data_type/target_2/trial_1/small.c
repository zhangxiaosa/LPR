
int j_low = 0x24F9;
int j_high = 0x6B7B;

int fn1() {
  int f;
  for (f; f;)
    j_low = 1;
  int m = j_low;
q:;
  j_low = j_low >> 1;
  j_low = j_low << m;
  goto q;
}

int main() {}
