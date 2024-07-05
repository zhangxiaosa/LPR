
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
  i.g = j.e | -(j.f && j.d) - (j.h && j.d);
}
