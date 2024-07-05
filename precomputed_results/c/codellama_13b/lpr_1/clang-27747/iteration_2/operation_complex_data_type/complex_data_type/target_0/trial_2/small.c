
struct c_new {
  int h : 18;
  int g;
} i, j;

int main() {
  struct c_new l;
  l.h = j.h;
  int n = j.h;
  int p = l.h | -165 - n;
  i.g = l.h;
}
