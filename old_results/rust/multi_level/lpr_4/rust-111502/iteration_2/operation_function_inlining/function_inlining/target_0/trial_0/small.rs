fn c() -> bool {
    let mut a = (0.0, true);
    *core::ptr::addr_of!((core::ptr::addr_of_mut!(a), (1.0, false)).1 .1) as *mut bool = true;
    return (1.0, false).1 .1;
}

fn main() {
    println!("{}", c());
}