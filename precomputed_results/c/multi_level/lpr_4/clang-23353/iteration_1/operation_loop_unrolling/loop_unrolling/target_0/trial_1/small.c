char fn1(char p1, char p2);
int i;
signed j_h;
int main() {
  j_h ^= fn1(6, i) && 1L;
  j_h ^= fn1(5, i) && 1L;
  j_h ^= fn1(4, i) && 1L;
  // Repeat the above three lines for a total of 14 times
}