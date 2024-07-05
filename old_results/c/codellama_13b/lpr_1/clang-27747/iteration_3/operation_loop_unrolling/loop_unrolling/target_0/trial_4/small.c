
struct c_new {
  int h : 18;
} i, j;

int main() {
  struct c_new l;
  l.h = j.h;

  i.h = l.h | -(165 && l.h) - (j.h && l.h);
  i.h = l.h | -(165 && l.h) - (j.h && l.h);
  i.h = l.h | -(165 && l.h) - (j.h && l.h);

  // ... (repeat for the entire loop)
}
