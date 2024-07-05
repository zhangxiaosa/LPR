
struct c_new {
  int h : 18;
  int g;
} i, j;

int main() {
  struct c_new l;
  int h = j.h;
  int g = j.g;
  int n = h && g;
  int p = h | -(165 && g) - n;
  i.g = p;
}
