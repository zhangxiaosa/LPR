
struct c_new {
  int h : 18;
  int g;
} i, j;

int main() {
  struct c_new l;
  int j_h = j.h;
  int l_h = l.h;
  int n = j_h && l_h;
  int p = l_h | -(165 && l_h) - n;
  i.g = p;
}
