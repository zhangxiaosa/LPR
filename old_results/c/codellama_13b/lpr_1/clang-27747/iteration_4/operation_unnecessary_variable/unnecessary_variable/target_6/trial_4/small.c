
struct c_new {
  int h_low : 18;
} i;
int main() {
  struct c_new l;
  l.h_low = i.h_low;
  i.h_low = l.h_low | 0;
}
