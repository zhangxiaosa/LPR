fn main() {
    let h = 5;
    let arg = 4;
    let i = 2;
    let mut l = 0;
    l |= 1;
    l = i * l;
    let mut k = (arg * l) % h;
}