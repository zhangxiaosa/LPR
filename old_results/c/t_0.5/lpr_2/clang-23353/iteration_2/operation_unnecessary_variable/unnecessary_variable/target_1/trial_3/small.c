char fn1(char p1, char p2) {
  return p1 * p2;
}

signed i;
signed j;

int main() {
  long p3;
  signed i_copy = i; // Copy propagation
  for (; true; )
    j ^= fn1(6, i_copy) && 1L;
}