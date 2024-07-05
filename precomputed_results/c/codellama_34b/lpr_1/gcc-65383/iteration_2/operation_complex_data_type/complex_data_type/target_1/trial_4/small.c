
#include <iostream>

int main() {
    int g;
    int h0 = 0x92A1D2CD;

    int fn2() {
        int r[5][9][5]; // Decomposed into primary data types
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 9; j++) {
                for (int k = 0; k < 5; k++) {
                    r[i][j][k] = 0;
                }
            }
        }

        if (h0) {
            return 0xC3;
        }

        int i = 0x06D7;
        g = r[i][i][i];
    }

    fn2();

    return 0;
}

