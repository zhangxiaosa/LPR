fn c() -> bool {
    let mut a0 = 0.;
    let mut a1 = true;
    let b0 = 0.;
    let b1 = false;
    let c0 = &mut a0 as *mut f32;
    let c1 = &mut a1 as *mut bool;
    let d0 = (&mut c0, (b0 as f64, b1));
    let d1 = (c0, (b0 as f64, b1));
    let e = unsafe { f(d0, d1, true, true) };
    return e;
}

unsafe fn f(k: *mut f32, d0: *mut *mut f32, d1: f64, d2: bool, g: bool, h: bool) -> bool {
    let i = d0.offset(1) as *mut bool;
    let j = g;
    *i = j;
    d0;
    return d1;
}

fn main() {
    println!("{}", c());
}