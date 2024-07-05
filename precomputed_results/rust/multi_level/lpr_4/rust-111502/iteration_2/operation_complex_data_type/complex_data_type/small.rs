fn c() -> bool {
    let mut a: (f64, bool) = (0.0, true);
    unsafe {
        f(
            &mut a,
            (
                (core::ptr::addr_of_mut!(a) as *mut (f64, bool)),
                (1.0, false),
            ),
            true,
        )
    }
}

unsafe fn f(_k: *mut (f64, bool), d: (*mut (f64, bool), (f64, bool)), g: bool) -> bool {
    let i: *mut bool = core::ptr::addr_of!(d.1 .1) as *mut bool;
    *i = g;
    d;
    return d.1 .1;
}

fn main() {
    println!("{}", c());
}
