struct {
  int d;
  unsigned e;
  unsigned f;
  int g;
  int h;
} i;

struct {
  int d;
  unsigned e;
  unsigned f;
  int g;
  int h;
} j;

int main() {
  i.d = j.e;
  i.g = (i.d | -(j.f && i.d) - j.h);
}