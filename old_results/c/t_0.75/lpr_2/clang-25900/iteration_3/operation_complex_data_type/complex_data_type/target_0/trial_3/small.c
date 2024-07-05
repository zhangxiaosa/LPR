int main() {
  struct m {
    int n : 18;
    int o : 1;
  };
  
  struct m ad = {1957};
  ad.o = fn1(5);
  
  return 0;
}