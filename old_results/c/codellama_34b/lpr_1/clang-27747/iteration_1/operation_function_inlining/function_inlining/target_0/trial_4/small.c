
struct c {
  int d : 18;
  int e;
  int g;
  int h;
};
struct c i;
int main() {
  int m = i.e;
  i.g = m | -(m && i.h) - (i.h && m);
}
