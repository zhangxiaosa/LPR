fn c() -> bool {
    let mut a = (0., true);
    let i = core::ptr::addr_of!((core::ptr::addr_of_mut!(a), (1., false)).1).1 as *mut bool;
    *i = true;
    return (core::ptr::addr_of_mut!((core::ptr::addr_of_mut!(a), (1., false)).1).1);
}

fn main() {
    println!("{}", c());
}