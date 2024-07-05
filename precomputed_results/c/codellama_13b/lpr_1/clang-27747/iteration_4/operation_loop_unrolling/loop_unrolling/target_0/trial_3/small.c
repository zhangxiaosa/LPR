
struct c_new {
  int h_low : 18;
} i, j;

int main() {
  struct c_new l;
  l.h_low = j.h_low;
  int n = j.h_low && l.h_low;
  for (int i = 0; i < 165; i++) {
    i.h_low = l.h_low | -(165 && l.h_low) - n;
  }
}
