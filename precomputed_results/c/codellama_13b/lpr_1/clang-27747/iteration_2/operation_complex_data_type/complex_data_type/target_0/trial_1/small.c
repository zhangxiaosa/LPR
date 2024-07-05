
struct c_new {
  int h : 18;
  int g;
} i, j;
int main() {
  struct c_new l;
  int h1 = j.h;
  int h2 = l.h;
  int n = h1 && h2;
  int p = h2 | -(165 && h2) - n;
  i.g = p;
}
