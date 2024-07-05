typedef char b;

struct c {
  int d;
  int e;
};

struct c f;

b fn1() {
  int h = 6L;

  if (f.e) {
    f.d = h;
    
    h = 6L;
    if (f.e) {
      f.d = h;
      
      h = 6L;
      if (f.e) {
        f.d = h;
        
        h = 6L;
        if (f.e) {
          f.d = h;
          
          // Continue unrolling the loop ...

        } else {
          return 0xEEACFBBFL;
        }
      } else {
        return 0xEEACFBBFL;
      }
    } else {
      return 0xEEACFBBFL;
    }
  } else {
    return 0xEEACFBBFL;
  }
}

int main() {}