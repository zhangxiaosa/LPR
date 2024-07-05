char fn1(char p1, char p2) { return p1 * p2; }

signed i;
signed j;

int main() {
  signed i_copy = i;
  j ^= fn1(-7, i_copy) && 1L;
}