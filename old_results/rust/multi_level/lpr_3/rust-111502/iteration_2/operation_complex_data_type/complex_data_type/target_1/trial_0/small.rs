fn c() -> bool {
    let mut a = 0.0;
    let e = unsafe { f((&mut a, true, 0.0, false), true, true) };
    return e;
}

unsafe fn f(d0: *mut f32, d1: bool, d2: f64, d3: bool, g: bool, _: bool) -> bool {
    let i = core::ptr::addr_of!(d3) as *mut bool;
    *i = g;
    return d3;
}

fn main() {
    println!("{}", c());
}