
int d = 18;
int e = 6738;
int f = 165;
int g = 0;
int h = 0;

struct c {
  int d : 18;
  int e;
  int f;
  int g;
  int h;
};

int j = 0;

int main() {
  int l_d = 24;
  int l_e = 6738;
  int l_f = 165;
  int l_g = 0;
  int l_h = 0;

  int m = j;
  l_d = m;
  int n = j && l_d;
  int o = l_d;
  int p = o | -(l_f && l_d) - n;
  l_g = p;
}
