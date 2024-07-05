
int i_d;
int main() {
  int l_d = i_d;
  int n = i_d && l_d;
  i_d = l_d | -(l_d && l_d) - n;
}
