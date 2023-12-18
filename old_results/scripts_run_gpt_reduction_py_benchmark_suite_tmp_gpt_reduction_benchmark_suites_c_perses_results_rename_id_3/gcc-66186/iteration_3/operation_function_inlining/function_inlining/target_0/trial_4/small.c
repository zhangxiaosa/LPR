#include <stdint.h>

int g;
int h;

int main() {
    int16_t ak[8];
    
    for (; g <= 7; g += 1) {
        unsigned p4 = g;  // Replace p4 with g
        
        for (p4 = 0; p4 <= 7; p4 += 1) {
            if (h < 0) {
                for (p4 = 0; p4 <= 7; p4 += 1) {
                    if (ak[g])
                        break;
                }
            }
        }
    }
    
    return g;
}