
typedef long long;

long fn1() {}

struct {
  long c;
}

struct {
  long c;
} fn2() {
  long c = fn1;
  struct {
    long c;
  } f = {c};
  return f;
}

main() {}
