fn c() -> bool {
    let mut a = (0., true);
    // Inlined code from f()
    let i = core::ptr::addr_of!((1., false).1) as *mut bool;
    *i = true;
    let d = (core::ptr::addr_of_mut!(a), (1., false));
    let e = d.1.1;
    return e;
}

fn main() {
    println!("{}", c());
}