
// Decomposition of the program

// 1. typedef long a;
// a is a primary data type (long)

// 2. fn1() {}
// fn1 is a function that returns nothing

// 3. typedef a d __attribute__((__vector_size__(sizeof(long))));
// d is a primary data type (__vector_size__(sizeof(long)))
// __vector_size__(sizeof(long)) is a vector of long type

// 4. d fn2() {
// fn2 is a function that returns a vector of long type

// 5. long c = fn1;
// c is a variable of type long

// 6. d f = {c};
// f is a variable of type d

// 7. return f;
// return f is a variable of type d

// 8. main() {}
// main is a function that returns nothing
