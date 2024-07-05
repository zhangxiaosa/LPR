fn c() -> bool {
    let mut a = 0.;
    let b = 1.; // Update the value of b
    let d = (&mut a as *mut f32, (0., false));
    let e = unsafe { f(&mut a, d, true, true) };
    return e;
}

unsafe fn f(k: *mut f32, d: (*mut f32, (f64, bool)), g: bool, _: bool) -> bool {
    let i = &mut (*d.1).1;
    *i = g;
    (*d.0) += *k;
    return (*d.1).1;
}

fn main() {
    println!("{}", c());
}