fn c() -> bool {
    let mut a = 0.0;
    let e = unsafe { f((&mut a, true, 0.0, false), true, true) };
    return e;
}

unsafe fn f(a_ptr: *mut f32, b: bool, c: f64, d_3: bool, g: bool, _: bool) -> bool {
    let i = core::ptr::addr_of!(d_3) as *mut bool;
    *i = g;
    d_3;
    return d_3;
}

fn main() {
    println!("{}", c());
}