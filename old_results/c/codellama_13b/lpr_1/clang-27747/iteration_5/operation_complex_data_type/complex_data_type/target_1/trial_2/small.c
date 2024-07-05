
struct c_new {
  int h_low : 18;
};

struct c_new i;

int main() {
  int h_low = i.h_low;
  int n = i.h_low && h_low;
  i.h_low = h_low | -(165 && h_low) - n;
}
