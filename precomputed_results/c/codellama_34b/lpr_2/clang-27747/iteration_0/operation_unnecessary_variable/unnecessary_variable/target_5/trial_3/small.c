
struct c {
  int d : 18;
  int e;
  int g;
  int h;
};
struct c i;
struct c j;
int main() {
  int m = j.e;
  int n = j.h && 24;
  int p = 24 | -(24 && 24) - n;
  i.g = p;
}
