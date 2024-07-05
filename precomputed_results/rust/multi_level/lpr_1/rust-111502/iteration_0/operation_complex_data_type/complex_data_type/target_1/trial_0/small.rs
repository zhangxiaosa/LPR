fn c() -> bool {
    let mut a = 0.0;
    let mut a_1 = true;
    let mut b = 0.0;
    let mut b_1 = false;
    let mut d = (&mut a, (b, b_1));
    let mut e = unsafe { f(d.0, d, true, true) };
    return e;
}

unsafe fn f(k: *mut f32, d: (*mut f32, (f64, bool)), g: bool, h: bool) -> bool {
    let mut i = &mut d.1 .1;
    let mut j = g;
    *i = j;
    d;
    return d.1 .1;
}

fn main() {
    println!("{}", c());
}