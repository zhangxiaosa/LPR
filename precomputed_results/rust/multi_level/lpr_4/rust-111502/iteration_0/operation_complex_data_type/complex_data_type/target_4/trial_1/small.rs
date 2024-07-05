fn c() -> bool {
    let mut a = 0.0;
    let mut a_bool = true;
    let mut b = 1.0;
    let mut b_bool = false;
    let mut d_f32_ptr = &mut a;
    let mut d_f64 = 0.0;
    let mut d_bool = true;
    let mut e = unsafe { f(&mut d_f32_ptr, (&mut d_f32_ptr, (d_f64, d_bool)), true, true) };
    return e;
}

unsafe fn f(k: *mut f32, d: (*mut f32, (f64, bool)), g: bool, h: bool) -> bool {
    let mut i = &mut d.1 .1 as *mut bool;
    let mut j = g;
    *i = j;
    return d.1 .1;
}

fn main() {
    println!("{}", c());
}