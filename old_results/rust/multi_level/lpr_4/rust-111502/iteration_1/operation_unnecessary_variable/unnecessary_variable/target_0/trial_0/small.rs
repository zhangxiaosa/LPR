fn c() -> bool {
    let mut a = ();
    let e = false;
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