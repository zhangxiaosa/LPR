typedef signed a;
typedef int b;
struct c {
  int d : 18;
  int e;
  int f;
  int g;
  int h;
};
struct c i;
struct c j;
b fn1() {
  b m = j.e;
  i.g = j.e | (-1 - (j.h && j.e));
}
int main() {}
