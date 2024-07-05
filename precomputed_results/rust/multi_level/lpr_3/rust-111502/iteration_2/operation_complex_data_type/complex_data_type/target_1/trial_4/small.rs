fn c() -> bool {
    let mut a = 0.0;
    let mut b = true;
    let mut c = 0.0;
    let mut d = false;
    let e = unsafe { f(&mut a, &mut b, &mut c, &mut d) };
    return e;
}

unsafe fn f(a: *mut f32, b: *mut bool, c: *mut f64, d: *mut bool) -> bool {
    let i = d;
    *i = *b;
    return *d;
}

fn main() {
    println!("{}", c());
}