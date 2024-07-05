fn c() -> bool {
    let mut a = 0.;
    let d_1_0 = 0.;
    let mut d = (d_1_0, false);
    unsafe { f(&mut a, &mut d.0, &mut d.1, true, true) }
}

unsafe fn f(k: *mut f32, d_1_0: *mut f32, d_1_1: *mut bool, g: bool, h: bool) -> bool {
    let i = d_1_1;
    *i = true;
    return *d_1_1;
}

fn main() {
    println!("{}", c());
}