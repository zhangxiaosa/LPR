fn c() -> bool {
    let mut a_f32 = 0.0;
    let mut a_bool = true;
    let b_f32 = 1.0;
    let b_bool = false;
    let d_a = &mut a_f32;
    let d_b_f32 = b_f32;
    let d_b_bool = b_bool;
    let d = (d_a, (d_b_f32, d_b_bool));
    let e = unsafe { f(d.0, d, true, true) };
    return e;
}

unsafe fn f(k: *mut (f32, bool), d: (*mut (f32, bool), (f64, bool)), g: bool, h: bool) -> bool {
    let i = &mut *(&d.1 .1 as *const bool as *mut bool);
    let j = g;
    *i = j;
    return d.1 .1;
}

fn main() {
    println!("{}", c());
}