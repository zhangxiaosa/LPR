
struct c_new {
  int h : 18;
  int g;
} i, j;

int main() {
  struct c_new l;
  int h_l, h_j;
  int n, p;

  h_l = j.h;
  h_j = j.h;
  n = h_j && h_l;
  p = h_l | -(165 && h_l) - n;
  i.g = p;
}
