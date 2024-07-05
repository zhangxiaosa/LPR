#include <stdlib.h>

int main() {
    int*** v_1;
    int dim1 = 6;
    int dim2 = 3;
    int dim3 = 2;
    
    // Allocate memory dynamically for v_1
    v_1 = (int***)malloc(dim1 * sizeof(int**));
    for (int i = 0; i < dim1; i++) {
        v_1[i] = (int**)malloc(dim2 * sizeof(int*));
        for (int j = 0; j < dim2; j++) {
            v_1[i][j] = (int*)malloc(dim3 * sizeof(int));
        }
    }
    
    // Access and modify the elements of v_1
    if (i) {
        return v_1[0x7EBA][0][0];
    }
    
    // Deallocate memory
    for (int i = 0; i < dim1; i++) {
        for (int j = 0; j < dim2; j++) {
            free(v_1[i][j]);
        }
        free(v_1[i]);
    }
    free(v_1);
    
    return 0;
}