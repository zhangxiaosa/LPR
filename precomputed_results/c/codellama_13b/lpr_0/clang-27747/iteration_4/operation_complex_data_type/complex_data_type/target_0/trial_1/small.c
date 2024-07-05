
int d;
bool d_and_l_d;
bool d_or_minus_d_and_l_d_minus_n;

int main() {
  int i;
  int j;
  int l;
  int n;

  l = j;
  n = j && l;
  i = l | -(l && l) - n;
}
