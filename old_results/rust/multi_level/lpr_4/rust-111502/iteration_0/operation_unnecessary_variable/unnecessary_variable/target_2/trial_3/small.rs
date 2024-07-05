fn c() -> bool {
    let mut a = (0., true);
    let d = (core::ptr::addr_of_mut!(a), (1., false));
    let e = unsafe { f(d.0, (core::ptr::addr_of_mut!(a), (1., false)), true, true) };
    return e;
}

unsafe fn f(k: *mut (f32, bool), d: (*mut (f32, bool), (f64, bool)), g: bool, h: bool) -> bool {
    let i = core::ptr::addr_of!(d.1 .1) as *mut bool;
    let j = g;
    *i = j;
    return d.1 .1;
}

fn main() {
    println!("{}", c());
}