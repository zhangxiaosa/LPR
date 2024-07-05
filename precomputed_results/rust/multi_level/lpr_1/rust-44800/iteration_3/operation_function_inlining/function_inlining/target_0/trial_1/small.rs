fn main() {
    let mut k_c: VecDeque<u8> = {
        let mut v = VecDeque::new();
        v.reserve_exact(32);
        v
    };
    k_c.push_front(7);
    k_c.push_front(6);
    k_c.push_front(5);
    k_c.push_front(4);
    k_c.push_front(3);
    k_c.push_front(2);
    k_c.push_front(1);
    k_c.push_front(0);
    k_c.reserve_exact(24);
    println!();
    k_c.extend(&[0xD9]);
}