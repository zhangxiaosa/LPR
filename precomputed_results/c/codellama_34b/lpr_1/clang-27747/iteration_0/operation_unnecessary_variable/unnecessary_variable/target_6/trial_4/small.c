
struct c {
  int d : 18;
  int e;
  int g;
  int h;
};
struct c i;
int main() {
  int m = i.e;
  int n = i.h && 24;
  int p = 24 | -(24 && 24) - n;
  i.g = p;
}
