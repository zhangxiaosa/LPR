
int i_d;

int main() {
  int l = i_d;
  int n = i_d && l.d;
  i_d = l.d | -(l.d && l.d) - n;
}
