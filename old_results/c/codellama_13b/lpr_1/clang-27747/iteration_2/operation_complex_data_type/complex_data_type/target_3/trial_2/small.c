
struct c_new {
  int h : 18;
  int g;
} i, j;

int main() {
  struct c_new l;
  l.h = j.h;
  int n = j.h && l.h;
  int p_high = l.h;
  int p_low = -(165 && l.h) - n;
  i.g = p_high + p_low;
}
