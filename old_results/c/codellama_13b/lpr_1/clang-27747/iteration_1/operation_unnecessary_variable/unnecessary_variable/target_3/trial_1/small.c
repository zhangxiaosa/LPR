
struct c {
  int g;
  int f;
} i, j;
int main() {
  struct c l;
  l.g = j.g;
  int n = j.g && l.g;
  int p = l.g | -(165 && l.g) - n;
  i.f = p;
}
