fn c() -> bool {
    let mut a = (0.0, true);
    let i = core::ptr::addr_of!((core::ptr::addr_of_mut!(a), (1.0, false)).1) as *mut bool;
    *i = true;
    (core::ptr::addr_of_mut!(a), (1.0, false));
    return (core::ptr::addr_of_mut!(a), (1.0, false)).1;
}

fn main() {
    println!("{}", c());
}