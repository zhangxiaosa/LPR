fn c() -> bool {
    let mut a = (0., true);
    let e = unsafe {
        let d = (core::ptr::addr_of_mut!(a), (1., false));
        let i = core::ptr::addr_of!((d.1).1) as *mut bool;
        *i = true;
        (d.1).1
    };
    return e;
}

fn main() {
    println!("{}", c());
}