fn c() -> bool {
    let mut a_0: f32 = 0.;
    let mut a_1: bool = true;
    let b_0: f32 = 0.;
    let b_1: bool = false;
    let mut d_0: *mut f32 = &mut a_0;
    let mut d_1: bool = a_1;
    let d = (d_0, (0.0, b_1));
    let e = unsafe { f(d.0, d, true, true) };
    return e;
}

unsafe fn f(k: *mut f32, d: (*mut f32, (f64, bool)), g: bool, h: bool) -> bool {
    let i: *mut bool = &mut (d.1).1;
    let j: bool = g;
    *i = j;
    d;
    return (d.1).1;
}

fn main() {
    println!("{}", c());
}