int main() {
  int o = g;

q:
  o = o << j;

  if (o) {
    goto q;
  }
}