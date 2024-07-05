
struct c {
  int d : 18;
  int e;
  unsigned f;
  int g;
  int h;
};

int i_d;
int i_e;
unsigned i_f;
int i_g;
int i_h;

int j_d;
int j_e;
unsigned j_f;
int j_g;
int j_h;

int fn1() {
  int n = j_h && j_e;
  int o = j_e;
  int p = o | -(j_f && j_e) - n;
  i_g = p;
}

int main() {}
