int main() {
  int f_d;
  
  if (f_d)
    goto i;
    
  f_d = 6L;
  
  if (f_d)
    goto i;
  
  return 0xEEACFBBF;
  
i:
  f_d = 6L;
  
  if (f_d)
    goto i;
    
  return 0xEEACFBBF;
}