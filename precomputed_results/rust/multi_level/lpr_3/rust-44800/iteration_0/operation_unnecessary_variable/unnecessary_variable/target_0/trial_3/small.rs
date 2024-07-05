fn main() {
    let mut buf = VecDeque::new();
    buf.reserve_exact(32);
    buf.push_front(0);
    buf.push_front(1);
    buf.push_front(1);
    buf.push_front(2);
    buf.push_front(3);
    buf.push_front(4);
    buf.push_front(5);
    buf.push_front(6);
    buf.push_front(1);
    buf.push_front(2);
    buf.push_front(3);
    buf.push_front(4);
    buf.reserve_exact(20);
    println!();
    buf.extend(&[0xD9]);
}
