fn c() -> bool {
    let mut a: f32 = 0.0;
    let d_0 = &mut a as *mut f32;
    let d_1: bool = true;
    let d_2: f64 = 0.0;
    let d_3: bool = false;
    let _ = unsafe { f(*d_0, d_1, d_2, d_3, true, true) };
    return unsafe { *(&d_3 as *const bool) };
}

unsafe fn f(k_val: f32, d_1: bool, d_2: f64, d_3: bool, g: bool, _h: bool) -> bool {
    let i: *mut bool = &mut d_3;
    let j: bool = g;
    *i = j;
    return *i;
}

fn main() {
    println!("{}", c());
}