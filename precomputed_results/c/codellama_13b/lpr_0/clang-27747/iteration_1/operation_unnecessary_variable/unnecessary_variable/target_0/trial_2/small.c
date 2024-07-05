
struct c {
  int d : 18;
  int e;
  int h;
};
struct c i;
struct c j;
int main() {
  int m = j.e;
  int n = j.h && m;
  i.d = m | -(m && m) - n;
}
