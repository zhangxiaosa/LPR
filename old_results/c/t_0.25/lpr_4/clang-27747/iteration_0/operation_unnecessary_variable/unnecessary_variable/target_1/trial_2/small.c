struct c {
  signed d : 18;
  unsigned e;
  unsigned f;
  signed g;
  signed h;
};
struct c i;
struct c j;
int main() {
  j.d = j.e;
  int n = j.h && j.e;
  int o = j.e;
  signed p = o | -(j.f && j.e) - n;
  i.g = p;
}