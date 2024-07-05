
struct c_new {
  int h_low : 18;
} i;

int main() {
  int l = i.h_low;
  int n = i.h_low && l;
  i.h_low = l | -(165 && l) - n;
}
