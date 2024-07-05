
struct c {
  int d : 18;
  int g;
  int h;
};
struct c i;
struct c j;
int main() {
  struct c l = {24, 6738, 165};
  int p = l.d | -(l.g && 6738) - j.h && 6738;
  i.g = p;
}
