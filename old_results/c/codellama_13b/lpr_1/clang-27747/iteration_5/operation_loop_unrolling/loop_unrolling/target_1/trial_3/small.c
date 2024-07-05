
struct c_new {
  int h_low : 18;
};

struct c_new i;

int main() {
  struct c_new l;
  l.h_low = i.h_low;
  int n = 0;
  n |= i.h_low & l.h_low;
  n |= (i.h_low & l.h_low) << 1;
  n |= (i.h_low & l.h_low) << 2;
  n |= (i.h_low & l.h_low) << 3;
  n |= (i.h_low & l.h_low) << 4;
  n |= (i.h_low & l.h_low) << 5;
  n |= (i.h_low & l.h_low) << 6;
  n |= (i.h_low & l.h_low) << 7;
  n |= (i.h_low & l.h_low) << 8;
  n |= (i.h_low & l.h_low) << 9;
  n |= (i.h_low & l.h_low) << 10;
  n |= (i.h_low & l.h_low) << 11;
  n |= (i.h_low & l.h_low) << 12;
  n |= (i.h_low & l.h_low) << 13;
  n |= (i.h_low & l.h_low) << 14;
  n |= (i.h_low & l.h_low) << 15;
  n |= (i.h_low & l.h_low) << 16;
  n |= (i.h_low & l.h_low) << 17;
  n |= (i.h_low & l.h_low) << 18;
  i.h_low = l.h_low | -(165 && l.h_low) - n;
}
