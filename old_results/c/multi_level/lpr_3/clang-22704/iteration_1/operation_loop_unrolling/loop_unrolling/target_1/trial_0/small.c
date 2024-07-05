int fd;
int fe;

char fn1() {
  if (fe) {
    goto i;
  } else {
    return 0;
  }

i:
  fd = 6L;

  // First iteration
  if (fe) {
    goto i;
  } else {
    return 0;
  }

  // Second iteration
  fd = 6L;

  if (fe) {
    goto i;
  } else {
    return 0;
  }
}

int main() {}
