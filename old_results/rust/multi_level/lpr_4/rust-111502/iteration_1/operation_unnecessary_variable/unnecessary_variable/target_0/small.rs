fn c() -> bool {
    let a_0 = 0.0;
    let a_1 = true;
    let mut a = (a_0, a_1);
    let e = unsafe { f(&mut a, (core::ptr::addr_of_mut!(a), (1.0, false)), true) };
    return e;
}

unsafe fn f(_k: *mut (f32, bool), d: (*mut (f32, bool), (f64, bool)), g: bool) -> bool {
    let i = core::ptr::addr_of!(d.1 .1) as *mut bool;
    *i = g;
    d;
    return d.1 .1;
}

fn main() {
    println!("{}", c());
}
