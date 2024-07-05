struct c {
  signed d : 18;
  unsigned e;
  unsigned f;
  signed g;
  signed h;
};

struct c i;
struct c j;

int main() {
  j.e = 24; // Assign constant value directly to j.e
  int n = j.h && j.e; // Replace l.d with j.e
  i.g = j.e | -(l.f && j.e) - n; // Replace l.d with j.e
}