fn c() -> bool {
    let mut a_0 = 0.;
    let mut a_1 = true;
    let mut b_0 = 0.;
    let mut b_1 = false;
    let mut d_0 = &mut a_0;
    let mut d_1_0 = 0.;
    let mut d_1_1 = false;
    let mut d_1 = (&mut d_1_0, &mut d_1_1);
    let mut e = unsafe { f(&amp;mut d_0, (&amp;mut d_1_0, &amp;mut d_1_1), true, true) };
    return e;
}

unsafe fn f(k: *mut f32, d_0: *mut f64, d_1: *mut bool, g: bool, h: bool) -> bool {
    let mut i = d_1;
    let mut j = g;
    *i = j;
    return *d_1;
}

fn main() {
    println!("{}", c());
}