fn c() -> bool {
    let mut a = (0., true);
    *core::ptr::addr_of_mut!((core::ptr::addr_of_mut!(a), (0., false)).1 .1) = true;
    return (core::ptr::addr_of_mut!(a), (0., false)).1 .1;
}

fn main() {
    println!("{}", c());
}