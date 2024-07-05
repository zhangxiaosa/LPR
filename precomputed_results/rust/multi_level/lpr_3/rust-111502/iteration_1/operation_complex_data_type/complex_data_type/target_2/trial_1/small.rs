fn c() -> bool {
    let mut a = 0.0;
    let mut d_0 = &mut a;
    let mut d_1 = true;
    let mut d_2 = 0.0;
    let mut d_3 = false;
    let e = unsafe { f(d_0, (d_0, d_1, d_2, d_3), true, true) };
    return e;
}

unsafe fn f(k: *mut f32, d: (*mut f32, bool, f64, bool), g: bool, _: bool) -> bool {
    *k = g;
    return g;
}

fn main() {
    println!("{}", c());
}