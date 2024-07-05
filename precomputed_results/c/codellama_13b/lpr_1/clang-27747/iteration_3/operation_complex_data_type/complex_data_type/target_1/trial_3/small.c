
struct c_new {
  int h_low : 18;
  int h_high : 16;
} i, j;

int main() {
  struct c_new l;
  l.h_low = j.h_low;
  int n = l.h_low;
  int p = l.h_low | -165 - n;
  i.h_low = p;
}
