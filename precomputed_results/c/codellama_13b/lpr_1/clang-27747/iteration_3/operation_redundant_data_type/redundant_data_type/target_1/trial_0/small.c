
struct c_new {
  int h : 18;
} i, j;

int main() {
  int h = j.h;
  int n = h && i.h;
  int p = h | -(165 && h) - n;
  i.h = p;
}
