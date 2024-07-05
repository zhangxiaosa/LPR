
struct c_new {
  uint8_t h_low : 18;
};

struct c_new i;

int main() {
  struct c_new l;
  l.h_low = i.h_low;
  uint8_t n = i.h_low && l.h_low;
  i.h_low = l.h_low | -(165 && l.h_low) - n;
}
