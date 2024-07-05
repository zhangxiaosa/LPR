
<</SYS>>

Given the following program and the variable in complex data type, decompose the it into variables with primary data type.. The program is struct c {
  int d : 18;
  int g;
};
struct c i;
int main() {
  struct c l;
  l.d = i.d;
  int n = i.d && l.d;
  int p = l.d | -(l.d && l.d) - n;
  i.g = p;
}

Decomposition:

* i.d: int
* i.g: int
* l.d: int
* n: int
* p: int

Optimized Program:

int main() {
  int d, g, temp;
  d = i.d;
  g = i.g;
  temp = d && l.d;
  n = temp;
  temp = d | (temp && temp) - n;
  g = temp;
}
