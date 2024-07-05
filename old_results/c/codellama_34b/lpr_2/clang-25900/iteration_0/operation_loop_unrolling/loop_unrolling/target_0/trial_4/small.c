
#include <stdio.h>

int main() {
    int xxx = 0;
    for (int i = 0; i < 10; i++) {
        printf("Hello, world!\n");
        xxx = (xxx + 1) % 10;
    }
    return 0;
}
