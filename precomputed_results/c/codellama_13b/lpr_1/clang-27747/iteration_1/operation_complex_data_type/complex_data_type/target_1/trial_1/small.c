
struct c {
  int h : 18;
  int e;
  int g_low : 8;
  int g_high : 8;
  int g_middle : 8;
  int g_xor;
  int g_or;
  int f;
} i, j;
int main() {
  struct c l;
  l.h = j.e;
  int n = j.f && l.h;
  int p = l.h | -(165 && l.h) - n;
  i.g_low = p;
  i.g_high = (p >> 8) & 0xFF;
  i.g_middle = (p >> 16) & 0xFF;
  i.g_xor = i.g ^ 0xFFFFFF;
  i.g_or = i.g | 0xFFFFFF;
  int e_low = i.e & 0xFF;
  int e_high = (i.e >> 8) & 0xFF;
  int e_middle = (i.e >> 16) & 0xFF;
  int e_xor = i.e ^ 0xFFFFFF;
  int e_or = i.e | 0xFFFFFF;
}
