
int j;
short i;
struct c {
  int d : 18;
  int e : 16;
  int f : 16;
};
int main() {
  struct c l = {24, 6738, 165};
  l.d = j;
  i = l.d | -(l.f && l.d) - 0;
}
