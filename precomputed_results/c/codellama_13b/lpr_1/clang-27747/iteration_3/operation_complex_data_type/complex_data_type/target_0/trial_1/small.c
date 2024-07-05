
struct c_new {
  int h : 18;
} i, j;

int main() {
  int h_j = j.h;
  int h_l = l.h;
  int n = h_j && h_l;
  int p = h_l | -(165 && h_l) - n;
  i.h = p;
}
