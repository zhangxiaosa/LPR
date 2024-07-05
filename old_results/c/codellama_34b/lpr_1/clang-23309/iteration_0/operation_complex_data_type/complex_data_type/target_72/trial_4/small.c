
u_char p76;
int lsb;
int ls2;
int ls3;
int ls4;
int ls5;
int ls6;
int ls7;
int msb;

lsb = (p76 & 0x01); // LSB
ls2 = (p76 & 0x02) >> 1; // LS2
ls3 = (p76 & 0x04) >> 2; // LS3
ls4 = (p76 & 0x08) >> 3; // LS4
ls5 = (p76 & 0x10) >> 4; // LS5
ls6 = (p76 & 0x20) >> 5; // LS6
ls7 = (p76 & 0x40) >> 6; // LS7
msb = (p76 & 0x80) >> 7; // MSB
