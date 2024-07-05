
struct c {
  int h : 8;
  int e : 16;
  int g : 8;
  int f : 8;
} i, j;

int main() {
  struct c l;
  l.h = j.h & 0xFF;
  int n = j.f & 0xFF && l.h & 0xFF;
  int p = l.h | -(165 && l.h) - n;
  i.g = p;
  int e_low = i.e & 0xFF;
  int e_high = (i.e >> 8) & 0xFF;
  int e_middle = (i.e >> 16) & 0xFF;
  int e_xor = i.e ^ 0xFFFFFF;
  int e_or = i.e | 0xFFFFFF;
}
