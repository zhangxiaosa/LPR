
struct c_new {
  int h : 18;
} i, j;
int main() {
  j.h = j.h;
  int n = j.h && j.h;
  int p = j.h | -(165 && j.h) - n;
  i.h = p;
}
