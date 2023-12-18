#include&lt;stdio.h&gt;

unsigned char u_opt;
unsigned v3;

int main() {
  char d = 2L;
  for (; u_opt &lt; 51U; ++u_opt) {
    v3 = (unsigned char)d;
    d = (char)(d + 0x9EE7F9D1C772505BLL);
  }
  printf("checksum = %hhX\n", v3);
  return 0;
}