typedef signed a;
typedef int b;
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
  struct c j = {24, 6738, 165};
  j.d = j.e;
  i.g = j.d | -(j.f && j.d) - (j.h && j.d);
}