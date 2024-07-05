fn c() -> bool {
    let mut a_0 = 0.0;
    let mut a_1 = true;
    let mut a = (a_0, a_1);
    let (d_f64, d_bool) = (core::f64::default(), core::bool::default());
    let e = unsafe { f(&mut a, (&mut a_1 as *mut bool, (1., false)), true) };
    return e;
}

unsafe fn f(_k: *mut (f32, bool), (d_0, d_1): (*mut f32, bool), g: bool) -> bool {
    let i = d_1 as *mut bool;
    *i = g;
    (d_0, d_1);
    return d_1;
}

fn main() {
    println!("{}", c());
}