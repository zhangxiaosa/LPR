fn c() -> bool {
    let mut a = (0., true);
    let i = core::ptr::addr_of_mut!(a.1) as *mut bool;
    *i = true;
    let e = (core::ptr::addr_of_mut!(a), (1., false)).1.1;
    return e;
}

fn main() {
    println!("{}", c());
}