fn c() -> bool {
    let mut a_0 = 0.0;
    let mut a_1 = true;
    let mut a = (a_0, a_1);
    let d_0 = 1.0;
    let d_1 = false;
    let e = unsafe { f(&mut a, (&d_0 as *mut f64, d_1), true) };
    return e;
}

unsafe fn f(_k: *mut (f32, bool), d: (*mut f64, bool), g: bool) -> bool {
    let i = d.0;
    *i = g;
    d;
    return d.1;
}

fn main() {
    println!("{}", c());
}