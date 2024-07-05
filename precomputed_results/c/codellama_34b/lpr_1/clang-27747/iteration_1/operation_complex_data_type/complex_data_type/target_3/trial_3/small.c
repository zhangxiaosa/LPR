
struct c {
  int d : 18;
  int e;
  int g;
  int h;
};

int main() {
  struct c i;
  int m = i.e;
  int n = i.h && m;
  int p = m | -(m && m) - n;
  i.g = p;
}
