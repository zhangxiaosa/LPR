
struct c {
  int d : 18;
  int e;
  int g;
};
struct c i;
int main() {
  struct c l;
  l.d = i.e;
  int p = l.d | -(l.d && l.d) - i.d; // n is optimized out
  i.g = p;
}
