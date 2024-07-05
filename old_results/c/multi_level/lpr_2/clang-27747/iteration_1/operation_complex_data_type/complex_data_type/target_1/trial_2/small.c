struct c {
  int d: 18;
  int e;
  int f;
  int g;
  int h;
};

struct c i;
struct c j;

int j_d;
int j_e;
int j_f;
int j_g;
int j_h;

int main() {
  struct c l = {24, 6738, 165};
  j_e = l.d;
  int n = j_h && j_e;
  i.g = j_e | -(j_f && j_e) - n;
}