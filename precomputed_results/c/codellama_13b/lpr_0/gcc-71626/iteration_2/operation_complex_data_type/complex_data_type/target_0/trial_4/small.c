
#include <iostream>
#include <cstdlib>

using namespace std;

typedef long* d;

d arena;

d fn1() {
    d arr = (d)malloc(2 * sizeof(long));
    arr[0] = 1;
    arr[1] = 2;
    return arr;
}

d fn2() {
    d arr = (d)malloc(3 * sizeof(long));
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    return arr;
}

int main() {
    arena = (d)malloc(10 * sizeof(long));
    d arr = fn2();
    cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;
    free(arr);
    return 0;
}
