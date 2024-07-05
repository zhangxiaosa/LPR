int fn3(int p1, int p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1
                                                                    : p1 + p2;
}

unsigned m;
unsigned n;
int o;
int main() {
  int result;
  int ac = 227;

  while (n < 12) {
    n = fn3(n, 3);

    result = o == 0 ? o : o % o;

    if (o > ac && result)
      break;

    n = fn3(n, 3);

    result = o == 0 ? o : o % o;

    if (o > ac && result)
      break;

    n = fn3(n, 3);

    result = o == 0 ? o : o % o;

    if (o > ac && result)
      break;

    n = fn3(n, 3);

    result = o == 0 ? o : o % o;

    if (o > ac && result)
      break;
  }

  return m;
}