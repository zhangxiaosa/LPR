
struct c_new {
  int h : 18;
  int g;
} i, j;

int main() {
  struct c_new l;
  int h = j.h;
  int n = h && l.h;
  int p = h | -(165 && h) - n;
  i.g = p;
}
