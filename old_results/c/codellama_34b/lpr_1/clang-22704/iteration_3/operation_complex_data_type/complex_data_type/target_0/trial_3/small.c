
#include <iostream>

int e;
int compute_value(const int *h) {
  int value = 0xEEACFBBFL;
  if (e) {
    *h = value;
    compute_value(h);
    return value;
  }
  compute_value(h);
  return value;
}

int main() {
  int result;
  int value = compute_value(&result);
  std::cout << "result = " << result << std::endl;
  std::cout << "value = " << value << std::endl;
  return 0;
}
