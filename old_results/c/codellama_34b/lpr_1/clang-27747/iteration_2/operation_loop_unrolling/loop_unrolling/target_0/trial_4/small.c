
struct c {
  int d : 18;
  int e;
  int g;
};

int main() {
  struct c i;
  int n = i.d && i.e;
  int p = i.d | -(i.d && i.d) - n;
  i.g = p;
}
