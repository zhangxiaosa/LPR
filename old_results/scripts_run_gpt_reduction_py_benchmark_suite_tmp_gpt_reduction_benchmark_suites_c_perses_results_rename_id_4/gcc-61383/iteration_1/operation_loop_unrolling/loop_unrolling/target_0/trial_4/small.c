int main() {
  unsigned m;
  unsigned n;
  signed o;
  
  // Unroll the loop by 3
  unsigned n1 = n;
  int ab;
  
  // Loop body 1
  if (0x4F92L < (ab = o == 0 ? o : o % o, 6))
    ;
  else if (o <= 0xE3L)
    ;
  else if (ab)
    break;
    
  // Loop body 2
  if (0x4F92L < (ab = o == 0 ? o : o % o, 6))
    ;
  else if (o <= 0xE3L)
    ;
  else if (ab)
    break;
    
  // Loop body 3
  if (0x4F92L < (ab = o == 0 ? o : o % o, 6))
    ;
  else if (o <= 0xE3L)
    ;
  else if (ab)
    break;
    
  // Update n1 after executing the loop body 3 times
  n1 = fn3(n1, 3);
  
  // Update m and return
  m = n1;
  return m;
}