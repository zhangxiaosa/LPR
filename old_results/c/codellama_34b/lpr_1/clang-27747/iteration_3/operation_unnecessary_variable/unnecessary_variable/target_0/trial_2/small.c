
struct c {
  int d : 18;
  int g;
};
struct c i;
int n;
int main() {
  i.d = i.d;
  n = i.d && i.d;
  int p = i.d | -(i.d && i.d) - n;
  i.g = p;
}
