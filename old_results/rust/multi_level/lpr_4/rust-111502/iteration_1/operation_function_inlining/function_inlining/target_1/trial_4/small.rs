fn c() -> bool {
    let mut a = (0., true);
    *core::ptr::addr_of_mut!(a.1) = true;
    return a.1;
}

fn main() {
    println!("{}", c());
}