int f_d;
int f_e;
char fn1() {
  if (f_e) {
    goto i;
  }
  while (true) {
    if (f_e) {
      goto i;
    }
    // Original function body code
    f_d = 6L;
  }
i:
  f_d = 6L;
}

int main() {}