
struct c {
  int h : 18;
  int g;
} i, j;
int main() {
  struct c l;
  l.h = j.h;
  int n = l.h;
  int p = l.h | -(-127) - n;
  i.g = p;
}
