fn c() -> bool {
    let mut a_0: f32 = 0.0;
    let mut a_1: bool = true;
    let e = unsafe { f(&mut (a_0, a_1), (&mut a_0, (1., false)), true) };
    return e;
}

unsafe fn f(_k: *mut (f32, bool), d: (*mut f32, (f64, bool)), g: bool) -> bool {
    let i = d.1 .1;
    let i_ptr = &i as *const bool as *mut bool;
    *i_ptr = g;
    d;
    return d.1 .1;
}

fn main() {
    println!("{}", c());
}