
struct c_new {
  int h : 18;
  int g_low : 16;
  int g_high : 2;
} i, j;

int main() {
  struct c_new l;
  l.h = j.h;
  int n = j.h && l.h;
  int g_high = l.h / 16;
  int g_low = l.h % 16;
  int p = g_high | -(165 && g_high) - n;
  i.g_low = p;
  i.g_high = g_high;
}
