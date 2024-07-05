
struct c {
  int d : 18;
  int e;
  int g;
  int h;
};
struct c i;
int main() {
  int m = i.e;
  int n = i.h && m;
  int p = m | -(m && m) - n;
  i.g = p;
}
