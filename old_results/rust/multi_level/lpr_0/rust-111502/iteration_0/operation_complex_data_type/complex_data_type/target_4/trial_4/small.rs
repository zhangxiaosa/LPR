fn c() -> bool {
    let mut a0 = 0.;
    let mut a1 = true;
    let mut b0 = 0.;
    let mut b1 = false;
    let mut d0 = &mut a0;
    let mut d1_0 = &mut a0;
    let mut d1_1_0 = b0;
    let mut d1 = &mut d1_0;
    let mut d = &mut (d0, (d1_1_0, b1));
    let mut e = unsafe { f(d0, d, true, true) };
    return e;
}

unsafe fn f(k: *mut (f32, bool), d: (*mut (f32, bool), (f64, bool)), g: bool, h: bool) -> bool {
    let mut i = &mut d.1.1.1;
    let mut j = g;
    *i = j;
    d;
    return d.1.1.1;
}

fn main() {
    println!("{}", c());
}