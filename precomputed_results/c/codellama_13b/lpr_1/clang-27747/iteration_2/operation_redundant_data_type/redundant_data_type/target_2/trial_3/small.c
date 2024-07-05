
struct c {
  int h : 18;
  int g;
} i, j;
int main() {
  int h = j.h;
  int n = j.h && h;
  int p = h | -(165 && h) - n;
  i.g = p;
}
