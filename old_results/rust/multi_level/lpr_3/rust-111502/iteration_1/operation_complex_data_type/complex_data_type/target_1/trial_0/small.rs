fn c() -> bool {
    let mut a = 0.0;
    let mut d_0 = &mut a;
    let d_1 = true;
    let d_2 = 0.0;
    let d_3 = false;
    let e = unsafe { f(&mut d_0, d_1, d_2, d_3, true, true) };
    return e;
}

unsafe fn f(k: *mut f32, d_1: bool, d_2: f64, d_3: bool, g: bool, _: bool) -> bool {
    let i = core::ptr::addr_of!(d_3) as *mut bool;
    *i = g;
    return d_3;
}

fn main() {
    println!("{}", c());
}