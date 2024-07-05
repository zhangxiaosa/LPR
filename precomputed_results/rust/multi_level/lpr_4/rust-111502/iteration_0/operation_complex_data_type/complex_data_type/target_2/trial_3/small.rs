fn c() -> bool {
    let mut a_0 = 0.;
    let mut a_1 = true;
    let b_0 = 1.;
    let b_1 = false;
    let mut d_0 = &mut a_0;
    let d_1_0 = 0.;
    let d_1_1 = false;
    let d_1 = (d_1_0, d_1_1);
    let d = (d_0, d_1);
    let e = unsafe { f(d_0, d, true, true) };
    return e;
}

unsafe fn f(k: *mut (f32, bool), d: (*mut (f32, bool), (f64, bool)), g: bool, h: bool) -> bool {
    let i = &mut (*d.0).1;
    let j = g;
    *i = j;
    d;
    return d.1 .1;
}

fn main() {
    println!("{}", c());
}