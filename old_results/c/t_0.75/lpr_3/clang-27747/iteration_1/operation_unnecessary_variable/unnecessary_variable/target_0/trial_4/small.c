struct c {
  int d : 18;
  int e;
  int f;
  int g;
  int h;
};
struct c i;
struct c j;
int main() {
  j.e = j.e;
  int n = j.h && j.e;
  i.g = j.e | -(j.f && j.e) - n;
}