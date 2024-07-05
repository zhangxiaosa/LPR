fn c() -> bool {
    let mut a_0 = 0.;
    let mut a_1 = true;
    let b_0 = 0.;
    let b_1 = false;
    let d_0 = &mut a_0;
    let d_1 = (b_0 as f64, b_1);
    let mut e = unsafe { f(d_0, (d_0, d_1), true, true) };
    return e;
}

unsafe fn f(k: *mut f32, d: (*mut f32, (f64, bool)), g: bool, h: bool) -> bool {
    let i = d.1 .1 as *mut bool;
    let j = g;
    *i = j;
    return d.1 .1;
}

fn main() {
    println!("{}", c());
}
