
struct c_new {
  int h_low : 18;
};

struct c_new i;

int main() {
  struct c_new l;

  int h_low_i = i.h_low; // decompose i.h_low into a primary data type
  int h_low_l = l.h_low; // decompose l.h_low into a primary data type

  int n = h_low_i && h_low_l;
  h_low_i = h_low_l | -((165 & h_low_l) - n);

  return 0;
}
