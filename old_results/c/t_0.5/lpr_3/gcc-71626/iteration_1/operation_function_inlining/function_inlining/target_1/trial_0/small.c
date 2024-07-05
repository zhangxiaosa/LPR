typedef long d __attribute__((__vector_size__(sizeof a)));

d fn2() {
    long c;
    d f;
  
    // Inlined fn1()
  
    // Empty body
  
    c = 0; // Placeholder statement to avoid an empty function
  
    // End of inlined fn1()
  
    f = {c};
    return f;
}