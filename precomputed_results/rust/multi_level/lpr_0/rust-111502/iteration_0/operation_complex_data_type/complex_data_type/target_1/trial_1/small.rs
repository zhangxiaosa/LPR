fn c() -> bool {
    let mut a = 0.0;
    let b = 0.0;
    let d = (&mut a as *mut f32, b);
    let e = unsafe { f(d.0, d, true, true) };
    return e;
}

unsafe fn f(k: *mut f32, d: (*mut f32, (f64, bool)), g: bool, h: bool) -> bool {
    let i = &mut d.1 .1 as *mut bool;
    let j = g;
    *i = j;
    d;
    return d.1 .1;
}

fn main() {
    println!("{}", c());
}