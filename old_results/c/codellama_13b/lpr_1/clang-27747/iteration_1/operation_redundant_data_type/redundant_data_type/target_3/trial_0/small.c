
struct c {
  int18_t d;
  uint8_t e;
  int16_t g;
  int16_t h;
} i, j;

int main() {
  struct c l;
  l.d = j.e;
  int n = j.h && l.d;
  int16_t p = l.d | -(165 && l.d) - n;
  i.g = p;
}
