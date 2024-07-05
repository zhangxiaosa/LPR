struct c {
  signed d : 18;
  unsigned e;
  unsigned f;
  signed g;
  signed h;
};
struct c i;
struct c j;
int fn1() {
  j.e;
  int n = j.h && j.e;
  int o = j.e;
  i.g = o | -(j.f && j.e) - n;
}
int main() {}
