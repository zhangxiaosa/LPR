struct m {
  signed n : 18;
  signed o : 1;
};

int main() {
  struct m ad = {1957};
  ad.o = 5;
  ad.o = 0;
}