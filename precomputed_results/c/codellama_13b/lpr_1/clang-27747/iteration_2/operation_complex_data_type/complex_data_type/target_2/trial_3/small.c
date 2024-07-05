
struct c_new {
  int h;
  int g;
} i, j;

int main() {
  struct c_new l;
  l.h = j.h;
  int h_j = j.h;
  int h_l = l.h;
  int n = h_j && h_l;
  int p = h_l | -(165 && h_l) - n;
  i.g = p;
}
