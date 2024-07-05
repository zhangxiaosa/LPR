
struct c {
  int d : 18;
  int e;
  int h;
};
struct c i;
struct c j;
int fn1() {
  int m = j.e;
  int n = j.h && m;
  i.d = m | -(j.h && m) - n;
}
int main() {}
