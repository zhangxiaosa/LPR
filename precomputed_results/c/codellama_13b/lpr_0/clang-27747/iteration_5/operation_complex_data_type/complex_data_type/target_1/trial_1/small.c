
int d;
int n;

int main() {
  d = i_d;
  n = i_d && d;
  i_d = d | -(d && d) - n;
}
