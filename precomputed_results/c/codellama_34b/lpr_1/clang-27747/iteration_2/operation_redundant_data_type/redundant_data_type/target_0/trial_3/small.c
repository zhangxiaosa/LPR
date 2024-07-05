
struct c {
  bit_field_int d: 18;
  normal_int e;
  normal_int g;
};
struct c i;
int main() {
  struct c l;
  l.d = i.e;
  normal_int n = i.d && l.d;
  normal_int p = l.d | -(l.d && l.d) - n;
  i.g = p;
}
