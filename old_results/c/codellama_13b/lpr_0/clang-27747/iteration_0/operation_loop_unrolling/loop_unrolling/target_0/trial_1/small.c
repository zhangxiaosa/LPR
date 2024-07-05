
typedef signed a;
typedef int b;
struct c {
  signed d : 18;
  unsigned e;
  unsigned f;
  signed g;
  signed h;
};
struct c i;
struct c j;
b fn1() {
  struct c l1 = {24, 6738, 165};
  struct c l2 = {24, 6738, 165};
  struct c l3 = {24, 6738, 165};
  b m1 = j.e;
  l1.d = m1;
  b m2 = j.e;
  l2.d = m2;
  b m3 = j.e;
  l3.d = m3;
  b n1 = j.h && l1.d;
  b n2 = j.h && l2.d;
  b n3 = j.h && l3.d;
  b o1 = l1.d;
  b o2 = l2.d;
  b o3 = l3.d;
  a p1 = o1 | -(l1.f && l1.d) - n1;
  a p2 = o2 | -(l2.f && l2.d) - n2;
  a p3 = o3 | -(l3.f && l3.d) - n3;
  i.g = p1;
  i.g = p2;
  i.g = p3;
}
int main() {}
