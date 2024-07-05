
// Decomposition of struct c into variables
struct c {
  int h : 18;
  int e_low;
  int e_high;
  int e_middle;
  int e_xor;
  int e_or;
  int f;
  int g;
} i, j;

int main() {
  // Decomposition of l
  int l_h = j.e;
  int n = j.f && l_h;
  int p = l_h | -(165 && l_h) - n;
  i.g = p;
  i.e_low = i.e & 0xFF;
  i.e_high = (i.e >> 8) & 0xFF;
  i.e_middle = (i.e >> 16) & 0xFF;
  i.e_xor = i.e ^ 0xFFFFFF;
  i.e_or = i.e | 0xFFFFFF;
}
