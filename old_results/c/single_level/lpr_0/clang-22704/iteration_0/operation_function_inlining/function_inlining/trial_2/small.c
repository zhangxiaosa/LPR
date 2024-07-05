typedef int a;

typedef char b;

struct c {

  a d;

  a e;

};


struct c f;



int main() {

  a h = 6L;

  if (f.e)

    goto i;

  // fn1() inlined here

  while (1) {

    a h = 6L;

    if (f.e)

      goto i;

    // fn1() inlined here (recursive call)

    while (1) {

      b j;

      return j;

    i:

      f.d = h;

      // fn1() inlined here (recursive call)

      while (1) {

        j = 0xEEACFBBFL;

        return j;

      }

    }

  }

}

