fn c() -> bool {
    let mut a0 = 0.0_f32;
    let mut a1 = true;
    let b0 = 0.0_f32;
    let b1 = false;
    let d0 = &mut a0;
    let d1 = b0;
    let d2 = b1;
    let e = unsafe { f(&mut a0, (&mut a0, (b0, b1)), true, true) };
    return e;
}

unsafe fn f(k0: *mut f32, d0: (&mut f32, (f32, bool)), g: bool, h: bool) -> bool {
    let i = &mut d0.1 .1;
    let j = g;
    *i = j;
    d0;
    return d0.1 .1;
}

fn main() {
    println!("{}", c());
}