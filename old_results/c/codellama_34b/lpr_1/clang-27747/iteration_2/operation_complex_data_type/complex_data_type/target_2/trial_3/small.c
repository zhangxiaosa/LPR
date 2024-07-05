
struct c {
  int d;
  int e;
  int g;
};

int main() {
  struct c i;
  i.d = 18;
  i.e = 32;
  i.g = i.e && i.d;
  i.g = i.d | -(i.d && i.d);
}
