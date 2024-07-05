fn c() -> bool {
    let mut a_0 = 0.0;
    let mut a_1 = true;
    let a = (a_0, a_1);
    let b_0 = 0.0;
    let b_1 = false;
    let b = (b_0, b_1);
    let d_0 = &mut a_0;
    let d = (d_0, b);
    let e = unsafe { f(d_0, d, true, true) };
    return e;
}

unsafe fn f(k: *mut f32, d: (*mut f32, (f64, bool)), g: bool, h: bool) -> bool {
    let i = d.1.1 as *mut bool;
    let j = g;
    *i = j;
    d;
    return d.1.1;
}

fn main() {
    println!("{}", c());
}