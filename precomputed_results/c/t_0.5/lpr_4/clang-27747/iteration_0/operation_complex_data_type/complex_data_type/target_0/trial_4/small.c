struct c {
  signed d : 18;
  unsigned e;
  unsigned f;
  signed g;
  signed h;
};

int main() {
  struct c i;
  struct c j;
  
  i.g = j.e;
}