
#include <vector>
#include <algorithm>

long fn2() {
  std::vector<long> arr = {0x92A1D2CDL, 0x92A1D2CDL, 0x06D7L};
  std::sort(arr.begin(), arr.end());
  return arr[0];
}

int main() {
  long result = fn2();
  return result;
}
