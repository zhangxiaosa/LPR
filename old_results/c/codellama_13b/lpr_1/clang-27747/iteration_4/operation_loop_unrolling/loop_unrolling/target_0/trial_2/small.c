
struct c_new {
  int h_low : 18;
} i, j;

int main() {
  struct c_new l;
  l.h_low = j[0].h_low;
  i[0].h_low = l.h_low | -(165 && l.h_low);
  l.h_low = j[1].h_low;
  i[1].h_low = l.h_low | -(165 && l.h_low);
  l.h_low = j[2].h_low;
  i[2].h_low = l.h_low | -(165 && l.h_low);
  ...
}
