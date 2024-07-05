fn main() {
    let mut k_c: Vec<u8> = Vec::with_capacity(32);
    k_c.insert(0, 7);
    k_c.insert(0, 6);
    k_c.insert(0, 5);
    k_c.insert(0, 4);
    k_c.insert(0, 3);
    k_c.insert(0, 2);
    k_c.insert(0, 1);
    k_c.insert(0, 0);
    k_c.reserve(24);
    println!();
    k_c.push(0xD9);
}