
struct c_new {
  int h_low;
};

int main() {
  struct c_new l;
  int h_low = l.h_low;
  int n = h_low && l.h_low;
  h_low = l.h_low | -(165 && l.h_low) - n;
}
