fn c() -> bool {
    let mut a_0 = 0.0;
    let mut a_1 = true;
    let b_0 = 0.0;
    let b_1 = false;
    unsafe { f(&mut a_0, &mut a_1, &mut b_0, &mut b_1, true, true) }
}

unsafe fn f(k_0: &mut f32, k_1: &mut bool, d_0_0: &mut f32, d_0_1: &mut bool, d_1_0: &mut f64, d_1_1: &mut bool, g: bool, h: bool) -> bool {
    let i = &mut *d_1_1;
    *i = g;
    return *d_1_1;
}

fn main() {
    println!("{}", c());
}