
int fn1() {
  // function body
}

typedef struct {
  int (*ptr)(int);
} D;

D fn2() { return (D){&fn1}; }

int main() {
  // main function body
}
