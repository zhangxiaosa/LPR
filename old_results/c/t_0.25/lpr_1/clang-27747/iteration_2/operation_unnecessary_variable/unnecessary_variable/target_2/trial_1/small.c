struct c {
  int d : 18;
  int e;
  int f;
  int g;
  int h;
};

struct c i;

int main() {
  i.g = i.e | -((i.h && i.e) && 1);
}