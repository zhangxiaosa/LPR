
struct c {
  int d : 18;
  int e;
  int h;
};
struct c i;
struct c j;
int main() {
  struct c l = {24, 6738, 165};
  int j_h = j.h;
  int l_d = l.d;
  int n = j_h && l_d;
  i.d = l.d | -(l.h && l.d) - n;
}
