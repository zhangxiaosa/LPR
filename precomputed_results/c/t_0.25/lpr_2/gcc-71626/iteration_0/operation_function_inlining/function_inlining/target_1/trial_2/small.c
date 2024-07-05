typedef long a;
a c;
typedef a d __attribute__((__vector_size__(sizeof(a))));
d f = {{}};