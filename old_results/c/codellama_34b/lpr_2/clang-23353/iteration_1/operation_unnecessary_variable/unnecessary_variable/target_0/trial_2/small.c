
char fn1(char p1, char p2) { return p1 * p2; }
struct g {
  signed h;
};
int i; // Removed
struct g j;
int fn2(int p2, char p3) {
  for (p3 = 6; p3 != -7; p3--)
    j.h ^= fn1(p3, 1L) && 1L; // Removed reference to i
  return p2;
}
int main() { return 0; }
