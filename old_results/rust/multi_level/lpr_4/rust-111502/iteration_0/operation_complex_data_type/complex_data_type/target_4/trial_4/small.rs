fn c() -> bool {
    let mut a = 0.0;
    let mut b = false;
    let mut d = (&mut a as *mut f32, (0.0, false));
    let e = unsafe { f(&mut d.0, d, true, true) };
    return e;
}

unsafe fn f(k: *mut f32, d: (*mut f32, (f64, bool)), g: bool, h: bool) -> bool {
    let i = d.1.1;
    let j = g;
    *k = if j { 1.0 } else { 0.0 };
    d;
    return i;
}

fn main() {
    println!("{}", c());
}