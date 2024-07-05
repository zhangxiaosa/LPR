
struct c_new {
  int h_low : 18;

  int main() {
    struct c_new l;
    l.h_low = h_low;
    int n = h_low && l.h_low;
    h_low = l.h_low | -(165 && l.h_low) - n;
  }
} i;
