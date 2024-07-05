struct c {
  signed int d : 18;
  unsigned int e;
  unsigned int f;
  signed int g;
  signed int h;
};

struct c i;
struct c j;

int main() {
  signed int l_d = 24;
  unsigned int l_e = 6738;
  unsigned int l_f = 165;

  signed int l_g;
  signed int j_e = 0;
  signed int j_h = 0;
  signed int n = 0;
  signed int o = 0;

  // Assign values to variables
  l_d = j_e;
  j_h = 0;
  n = j_h && l_d;
  o = l_d;

  // Perform computation
  l_g = o | -(l_f && l_d) - n;

  // Assign result to 'i.g'
  i.g = l_g;

  return 0;
}