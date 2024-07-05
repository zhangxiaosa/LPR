fn c() -> bool {
    let mut a = (0., true);
    let d = (core::ptr::addr_of_mut!(a), (0., false));
    *core::ptr::addr_of!(d.1 .1) = true;
    return d.1 .1;
}

fn main() {
    println!("{}", c());
}