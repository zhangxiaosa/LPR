
struct c {
  int e;
  int g;
  int f;
  int h : 18;
} i, j;

int main() {
  struct c l;
  l.e = j.e;
  int n = j.f && l.h;
  int p = l.h | -(165 && l.h) - n;
  i.g = p;
  int e_low = i.e & 0xFF;
  int e_high = (i.e >> 8) & 0xFF;
  int e_middle = (i.e >> 16) & 0xFF;
  int e_xor = i.e ^ 0xFFFFFF;
  int e_or = i.e | 0xFFFFFF;
}
