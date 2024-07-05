typedef int a;

typedef int c;

typedef unsigned d;

typedef unsigned e;

d f;

a g;

int main() {
  a i;

  c j = 0x24F96B7BL;

  e k;

  for (f = 0;)

    switch (j) {

      case 4:

        --j;

        // fallthrough

      case 3:

        --j;

        // fallthrough

      case 2:

        --j;

        // fallthrough

      case 1:

        --j;

        // fallthrough

      case 0:

        goto loop_exit;

    }



loop_exit:

  c l = 1L;

  c m = j;

  a n = g;

q:

  k = k >> l;

  i = n;

  if (i) {

    k = k << m;

    goto q;

  }

}