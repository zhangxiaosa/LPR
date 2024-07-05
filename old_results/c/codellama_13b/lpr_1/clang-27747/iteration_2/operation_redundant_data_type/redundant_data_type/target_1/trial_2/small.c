
struct c {
  int h : 18;
  int g;
} i, j;

int main() {
  int n = j.h && i.h;
  int p = i.h | -(165 && i.h) - n;
  i.g = p;
}
