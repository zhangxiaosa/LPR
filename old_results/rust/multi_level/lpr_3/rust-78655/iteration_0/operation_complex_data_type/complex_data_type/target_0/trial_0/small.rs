fn main() {
    let b: u32;
    let a: &u32;
    {
        b = 0;
        a = &b;
    }
}