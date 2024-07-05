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
  j.e = 24;
  int n = j.h && j.e;
  signed p = j.e | -(j.f && j.e) - n;
  i.g = p;
}