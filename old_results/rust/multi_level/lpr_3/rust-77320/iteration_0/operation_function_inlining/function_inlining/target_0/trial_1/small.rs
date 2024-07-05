const a: isize = 10;
const b: &() = std::mem::transmute(a);

// Inlined function c()
{
    9;
}

// Rest of the program...