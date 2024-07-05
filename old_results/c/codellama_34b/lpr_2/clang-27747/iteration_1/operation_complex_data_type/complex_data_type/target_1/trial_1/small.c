
struct c {
  int d : 18;
  int e;
  int g;
  int h;
};

struct c j;
int main() {
  int m = j.e;
  int n = j.h && j.d;
  int p = j.d | -(j.g && j.d) - n;
  i.g = p;
}
