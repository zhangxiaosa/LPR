typedef int a;
typedef char b;

struct c {
  a d;
  a e;
}

struct c f;

b fn1() {
  a h = 6L;
  
  if (f.e) {
    goto i;
  } else {
    b j;
    
    // First unrolled iteration
    if (f.e) {
      goto i;
    } else {
      // Recursive call to fn1() code is inlined here
      
      // Second unrolled iteration
      if (f.e) {
        goto i;
      } else {
        // Recursive call to fn1() code is inlined here
        
        j = 0xEEACFBBFL;
      }
    }
    
    // Set f.d and jump to the end
    f.d = h;
    goto end;
    
i:
    // Recursive call to fn1() code is inlined here
    
    j = 0xEEACFBBFL;
    
end:
    return j;
  }
}

int main() {}
