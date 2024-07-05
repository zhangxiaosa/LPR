const a: isize = 10;
const b: &() = std::mem::transmute(a);
const c: isize = 9;