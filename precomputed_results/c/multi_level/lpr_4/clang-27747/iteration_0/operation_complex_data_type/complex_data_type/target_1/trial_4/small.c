typedef int b;

signed int d_j;
unsigned int e_j;
unsigned int f_j;
signed int g_j;
signed int h_j;

struct c {
  signed int d;
  unsigned int e;
  unsigned int f;
  signed int g;
  signed int h;
};

struct c i;
struct c j;

b main() {
  signed int d_l = 24;
  unsigned int e_l = 6738;
  unsigned int f_l = 165;
  
  b m = e_j;
  d_l = m;
  
  b n = h_j && d_l;
  b o = d_l;
  
  signed int p = o | -(f_l && d_l) - n;
  i.g = p;
}