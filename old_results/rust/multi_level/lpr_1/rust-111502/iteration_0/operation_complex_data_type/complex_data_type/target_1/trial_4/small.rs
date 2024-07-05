fn c() -> bool {
    let mut a: (f32, bool) = (0., true);
    let b: (f32, bool) = (0., false);
    let d: (*mut (f32, bool), (f64, bool)) = (core::ptr::addr_of_mut!(a), b);
    let e: bool = unsafe { f(d.0, d, true, true) };
    return e;
}

unsafe fn f(k: *mut (f32, bool), d: (*mut (f32, bool), (f64, bool)), g: bool, h: bool) -> bool {
    let i: *mut bool = core::ptr::addr_of!(d.1 .1) as *mut bool;
    let j: bool = g;
    *i = j;
    return d.1 .1;
}

fn main() {
    println!("{}", c());
}