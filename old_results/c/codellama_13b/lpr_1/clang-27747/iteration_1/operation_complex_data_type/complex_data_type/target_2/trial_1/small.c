
struct c {
  int h : 18;
  int e;
  int g;
  int f;
} i, j;
int main() {
  int h_low = i.h & 0xFFFF;
  int h_high = (i.h >> 16) & 0xFFFF;
  int h_middle = (i.h >> 8) & 0xFF;
  int h_xor = i.h ^ 0xFFFF;
  int h_or = i.h | 0xFFFF;
  
  int e_low = i.e & 0xFF;
  int e_high = (i.e >> 8) & 0xFF;
  int e_middle = (i.e >> 16) & 0xFF;
  int e_xor = i.e ^ 0xFFFFFF;
  int e_or = i.e | 0xFFFFFF;
  
  int g_low = i.g & 0xFFFF;
  int g_high = (i.g >> 16) & 0xFFFF;
  int g_middle = (i.g >> 8) & 0xFF;
  int g_xor = i.g ^ 0xFFFF;
  int g_or = i.g | 0xFFFF;
  
  int f_low = i.f & 0xFFFF;
  int f_high = (i.f >> 16) & 0xFFFF;
  int f_middle = (i.f >> 8) & 0xFF;
  int f_xor = i.f ^ 0xFFFF;
  int f_or = i.f | 0xFFFF;
  
  int n = j.f && l.h;
  int p = l.h | -(165 && l.h) - n;
  
  i.g = p;
}
