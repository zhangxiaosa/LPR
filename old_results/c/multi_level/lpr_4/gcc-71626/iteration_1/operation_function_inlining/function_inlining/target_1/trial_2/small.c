typedef long __attribute__((__vector_size__(sizeof a))) a_vector;
long __attribute__((__vector_size__(sizeof a))) f = {{}};
return f;