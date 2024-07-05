fn c() -> bool {
    let b = (0., false);
    let d = (core::ptr::addr_of_mut!((0., true)), b);
    let e = unsafe { f(d.0, d, true, true) };
    return e;
}

unsafe fn f(k: *mut (f32, bool), d: (*mut (f32, bool), (f64, bool)), g: bool, h: bool) -> bool {
    let j = g;
    return d.1.1;
}

fn main() {
    println!("{}", c());
}