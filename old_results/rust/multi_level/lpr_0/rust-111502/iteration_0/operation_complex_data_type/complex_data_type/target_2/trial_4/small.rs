fn c() -> bool {
    let mut a_f32 = 0.;
    let a_bool = true;
    let mut a = (a_f32, a_bool);
    let b_f32 = 0.;
    let b_bool = false;
    let b = (b_f32, b_bool);
    let d_a = &mut a as *mut _;
    let d_b = b;
    let d = (d_a, d_b);
    let e = unsafe { f(d_a, d, true, true) };
    return e;
}

unsafe fn f(k_a: *mut f32, d: (*mut (f32, bool), (f64, bool)), g: bool, h: bool) -> bool {
    let i = &mut (*d.1).1 as *mut bool;
    let j = g;
    *i = j;
    return (*d.1).1;
}

fn main() {
    println!("{}", c());
}