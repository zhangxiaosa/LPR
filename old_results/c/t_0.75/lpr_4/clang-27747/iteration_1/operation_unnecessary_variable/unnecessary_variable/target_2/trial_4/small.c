struct c {
  int d : 18;
  int e;
  int f;
  int g;
  int h;
};

struct c j;
int main() {
  j = {24, 6738, 165};
  j.d = j.e;
  int n = j.h && j.d;
  signed p = j.d | -(j.f && j.d) - n;
  j.g = p;
}