
#include <stdio.h>

// Structure definition
struct c {
    int d : 18;
    int g;
};

// Function to decompose the structure variable into primary data types
void decomposeStruct(struct c* s) {
    int d = s->d;
    int g = s->g;
    printf("d: %d, g: %d\n", d, g);
}

int main() {
    struct c i;
    i.d = 10;
    i.g = 20;

    // Decompose the structure variable 'i' into primary data types
    decomposeStruct(&i);

    return 0;
}
