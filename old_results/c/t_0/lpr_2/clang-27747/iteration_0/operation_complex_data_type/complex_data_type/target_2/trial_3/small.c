int j_e;
int j_h;

int l_d;
unsigned int l_e;
unsigned int l_f;
signed int l_g;
signed int l_h;

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
  struct c l = {24, 6738, 165};
  int m = j_e;
  l_d = m;
  int n = j_h && l_d;
  int o = l_d;
  signed int p = o | -(l_f && l_d) - n;
  i.g = p;
}