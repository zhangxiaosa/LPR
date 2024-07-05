
for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 9; j++) {
        for (int k = 0; k < 5; k++) {
            printf("r_real[%d][%d][%d] = %u\n", i, j, k, r_real[i][j][k]);
            printf("r_imag[%d][%d][%d] = %u\n", i, j, k, r_imag[i][j][k]);
        }
    }
}
