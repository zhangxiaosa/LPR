
int d;
int i_d;
int main() {
  d = i_d;
  i_d = d | -(d && d);
}
