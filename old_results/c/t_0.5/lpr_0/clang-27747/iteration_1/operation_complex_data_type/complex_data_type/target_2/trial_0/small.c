struct c {
  int d : 18;
  int e;
  int f;
  int g;
  int h;
};

struct c i;
struct c j;

int main() {
  int l_d = j.e;
  int l_f = 6738;
  int l_g = 165;
  
  l_d = j.e;
  int n = j.h && l_d;
  i.g = l_d | -(l_f && l_d) - n;
}