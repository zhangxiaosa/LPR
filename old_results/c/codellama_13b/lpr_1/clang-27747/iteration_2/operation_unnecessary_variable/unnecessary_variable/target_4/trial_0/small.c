
struct c_new {
  int h : 18;
} i, j;
int main() {
  struct c_new l;
  l.h = j.h;
  int p = l.h | -(165 && l.h);
  i.h = p;
}
