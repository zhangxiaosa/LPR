fn c() -> bool {
    let mut a0 = 0.0;
    let mut a1 = true;
    let mut b0 = 1.0;
    let mut b1 = false;
    let mut g = true;

    unsafe { f(&mut a0, &mut a1, &mut b0, &mut b1, &mut g) }
}

unsafe fn f(
    _k0: *mut f64,
    _k1: *mut bool,
    d0: *mut f64,
    d1: *mut bool,
    g: *mut bool,
) -> bool {
    let i = d1;
    *i = *g;

    let _ = d0; // Discard d0

    *d1
}

fn main() {
    println!("{}", c());
}