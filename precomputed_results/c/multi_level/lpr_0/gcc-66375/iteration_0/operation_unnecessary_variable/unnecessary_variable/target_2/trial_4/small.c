char fn2(int p1, int p2) { return p1; }

short fn3(short p1, short p2) { return p2; }

int u;
in
int v3;

int main() {

 int checksum = 2;

 // int e[9]; // e is optimized out
 v3 = 2;
 checksum = 2;
 checksum = checksum + 2523199736912621835; // e is replaced by constant

 printf("checksum = %d\n", v3);
 return 0;
}