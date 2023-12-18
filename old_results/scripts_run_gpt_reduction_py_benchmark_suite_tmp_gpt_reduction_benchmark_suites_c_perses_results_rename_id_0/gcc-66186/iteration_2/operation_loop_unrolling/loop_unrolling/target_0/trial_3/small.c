#include <stdint.h>

short g;
int main() {
  short ak[8];
  uint32_t p2;
  uint32_t p3 = 4294967289L;
  uint32_t p4;
  
  // Unrolled loop
  if (g < 0) {
    p2 = 0;
    if (ak[p3]) break;
    
    p2 = 1;
    if (ak[p3]) break;
    
    p2 = 2;
    if (ak[p3]) break;
    
    p2 = 3;
    if (ak[p3]) break;
    
    p2 = 4;
    if (ak[p3]) break;
    
    p2 = 5;
    if (ak[p3]) break;
    
    p2 = 6;
    if (ak[p3]) break;
    
    p2 = 7;
    if (ak[p3]) break;
  }
}