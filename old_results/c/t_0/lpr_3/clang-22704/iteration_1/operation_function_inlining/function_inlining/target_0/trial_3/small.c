int f_d;
int f_e;

char fn1() {
  if (f_e) {
    goto i;
  }

  if (f_e) {
    goto i;
  }

i:
  f_d = 6L;

  if (f_e) {
    goto i;
  }
}

int main() {}
