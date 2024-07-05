fn c() -> bool {
    let mut a_0: f32 = 0.;
    let mut a_1: bool = true;
    let b_0: f32 = 1.;
    let b_1: bool = false;
    let a = (a_0, a_1);
    let b = (b_0, b_1);
    let d_0 = &mut a;
    let d_1_0: f64 = 0.;
    let d_1_1: bool = false;
    let d = (d_0, (d_1_0, d_1_1));
    let e_0: bool = unsafe { f(d.0, d, true, true) };
    let e = e_0;
    return e;
}

unsafe fn f(k: *mut (f32, bool), d: (*mut (f32, bool), (f64, bool)), g: bool, h: bool) -> bool {
    let d_1_1 = &mut (*d.1 as *mut (f64, bool)).1;
    let i = d_1_1 as *mut bool;
    let j = g;
    *i = j;
    return (*d.1 as (f64, bool)).1;
}

fn main() {
    println!("{}", c());
}