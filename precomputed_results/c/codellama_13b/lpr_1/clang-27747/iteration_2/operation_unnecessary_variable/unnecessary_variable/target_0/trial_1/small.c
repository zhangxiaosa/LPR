
struct c_new {
  int h : 18;
} i, j;
int main() {
  struct c_new l;
  l.h = j.h;
  int n = j.h && l.h;
  int p = j.h | -(165 && j.h) - n;
}
