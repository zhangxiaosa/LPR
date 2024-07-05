
#include <stdio.h>

struct c {
  int d : 18;
  int e;
  int g;
  int h;
};
struct c i;

int main() {
  struct c l = {24, 6738, 165};
  int m = i.e;
  l.d = m;
  int n = i.h && l.d;
  int p = l.d | -(l.d && l.d) - n;
  i.g = p;
}

int optimized_main() {
  struct c l = {24, 6738, 165};
  int m = i.e;
  l.d = m;
  int n = i.h && l.d;
  int p = l.d | -(l.d && l.d) - n;
  i.g = p;
}

int main_optimized() {
  int m = i.e;
  struct c l = {24, 6738, 165};
  l.d = m;
  int n = i.h && l.d;
  int p = l.d | -(l.d && l.d) - n;
  i.g = p;
}

int optimized_main_2() {
  int m = i.e;
  struct c l = {24, 6738, 165};
  l.d = m;
  int p = l.d | -(l.d && l.d) - (i.h && l.d);
  i.g = p;
}

int main_optimized_2() {
  int m = i.e;
  struct c l = {24, 6738, 165};
  l.d = m;
  int p = l.d | -(l.d && l.d) - (i.h && l.d);
  i.g = p;
}

int optimized_main_3() {
  int m = i.e;
  struct c l = {24, 6738, 165};
  l.d = m;
  int p = l.d | -(l.d && l.d) - (i.h && l.d);
  i.g = p;
}

int main_optimized_3() {
  int m = i.e;
  struct c l = {24, 6738, 165};
  l.d = m;
  int p = l.d | -(l.d && l.d) - (i.h && l.d);
  i.g = p;
}

int optimized_main_4() {
  int m = i.e;
  struct c l = {24, 6738, 165};
  l.d = m;
  int p = l.d | -(l.d && l.d) - (i.h && l.d);
  i.g = p;
}

int main_optimized_4() {
  int m = i.e;
  struct c l = {24, 6738, 165};
  l.d = m;
  int p = l.d | -(l.d && l.d) - (i.h && l.d);
  i.g = p;
}

int optimized_main_5() {
  int m = i.e;
  struct c l = {24, 6738, 165};
  l.d = m;
  int p = l.d | -(l.d && l.d) - (i.h && l.d);
  i.g = p;
}

int main_optimized_5() {
  int m = i.e;
  struct c l = {24, 6738, 165};
  l.d = m;
  int p = l.d | -(l.d && l.d) - (i.h && l.d);
  i.g = p;
}

int optimized_main_6() {
  int m = i.e;
  struct c l = {24, 6738, 165};
  l.d = m;
  int p = l.d | -(l.d && l.d) - (i.h && l.d);
  i.g = p;
}

int main_optimized_6() {
  int m = i.e;
  struct c l = {24, 6738, 165};
  l.d = m;
  int p = l.d | -(l.d && l.d) - (i.h && l.d);
  i.g = p;
}

int optimized_main_7() {
  int m = i.e;
  struct c l = {24, 6738, 165};
  l.d = m;
  int p = l.d | -(l.d && l.d) - (i.h && l.d);
  i.g = p;
}

int main_optimized_7() {
  int m = i.e;
  struct c l = {24, 6738, 165};
  l.d = m;
  int p = l.d | -(l.d && l.d) - (i.h && l.d);
  i.g = p;
}

int optimized_main_8() {
  int m = i.e;
  struct c l = {24, 6738, 165};
  l.d = m;
  int p = l.d | -(l.d && l.d) - (i.h && l.d);
  i.g = p;
}

int main_optimized_8() {
  int m = i.e;
  struct c l = {24, 6738, 165};
  l.d = m;
  int p = l.d | -(l.d && l.d) - (i.h && l.d);
  i.g = p;
}

int optimized_main_9() {
  int m = i.e;
  struct c l = {24, 6738, 165};
  l.d = m;
  int p = l.d | -(l.d && l.d) - (i.h && l.d);
  i.g = p;
}

int main_optimized_9() {
  int m = i.e;
  struct c l = {24, 6738, 165};
  l.d = m;
  int p = l.d | -(l.d && l.d) - (i.h && l.d);
  i.g = p;
}

int optimized_main_10() {
  int m = i.e;
  struct c l = {24, 6738, 165};
  l.d = m;
  int p = l.d | -(l.d && l.d) - (i.h && l.d);
  i.g = p;
}

int main_optimized_10() {
  int m = i.e;
  struct c l = {24, 6738, 165};
  l.d = m;
  int p = l.d | -(l.d && l.d) - (i.h && l.d);
  i.g = p;
}
