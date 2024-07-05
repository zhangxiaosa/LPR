
int d;
int i_d;

int main() {
  d = i_d;
  int n = i_d && d;
  i_d = d | -(d && d) - n;
}
