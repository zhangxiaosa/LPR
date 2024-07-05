
int j = 0x24F96B7BL;
for (f = 0; f;) {
    unsigned k = j;
    for (int i = 0; i < 4; i++) {
        if (k == 0) {
            break;
        }
        k--;
    }
    j >>= 1L;
}
