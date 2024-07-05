fn c() -> bool {
    let mut a_0: f32 = 0.;
    let mut a_1: bool = true;

    let b_0: f32 = 0.;
    let b_1: bool = false;

    let d_0: *mut (f32, bool) = &mut (a_0, a_1);
    let d_1_0: f64 = 0.;
    let d_1_1: bool = false;
    let d_1: (f64, bool) = (d_1_0, d_1_1);
    let d: (*mut (f32, bool), (f64, bool)) = (d_0, d_1);

    let e = unsafe { f(d.0, d, true, true) };

    return e;
}

unsafe fn f(k: *mut (f32, bool), d: (*mut (f32, bool), (f64, bool)), g: bool, h: bool) -> bool {
    let i: *mut bool = &mut d.1 .1;
    let j: bool = g;
    *i = j;

    return d.1 .1;
}

fn main() {
    println!("{}", c());
}