fn c() -> bool {
    let mut a0 = 0.0;
    let mut a1 = true;
    let b = (0.0, false);
    unsafe { f(&mut a0, &mut a1, &mut (a0, a1), (0.0, false), true, true) }
}

unsafe fn f(k0: *mut f32, k1: *mut bool, d0: *mut (f32, bool), d1: (f64, bool), g: bool, h: bool) -> bool {
    let i = k1 as *mut bool;
    *i = g;
    d;
    return d1.1;
}

fn main() {
    println!("{}", c());
}