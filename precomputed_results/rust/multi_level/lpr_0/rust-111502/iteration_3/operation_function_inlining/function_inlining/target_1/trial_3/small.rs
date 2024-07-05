fn c() -> bool {
    let mut a = 0.;
    let d = {
        let i = core::ptr::addr_of!((0., false)).1 as *mut bool;
        *i = true;
        (core::ptr::addr_of_mut!(a), (0., false))
    };
    d;
    return d.1.1;
}

fn main() {
    println!("{}", c());
}