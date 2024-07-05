struct c {
  int d : 18;
  int e;
  int f;
  int g;
  int h;
};

int i_d;
int i_e;
int i_f;
int i_g;
int i_h;
struct c i;

int j_d;
int j_e;
int j_f;
int j_g;
int j_h;
struct c j;

int main() {
  int l_d = 24;
  int l_e = 6738;
  int l_f = 165;
  
  i_d = j_e;
  int n = j_h && l_d;
  i_g = l_d | -(l_f && l_d) - n;
}