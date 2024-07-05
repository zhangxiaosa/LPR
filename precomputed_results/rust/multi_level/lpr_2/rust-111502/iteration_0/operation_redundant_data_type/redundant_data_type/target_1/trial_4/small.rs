fn c() -> bool {
    let mut a = (0., true);
    let b = (0., false);
    let d = (&mut a, b);
    let e = unsafe { f(&mut d.0, d, true, true) };
    return e;
}

unsafe fn f(k: *mut (f32, bool), d: ((f32, bool), (f64, bool)), g: bool, h: bool) -> bool {
    let i = &mut d.1.1;
    let j = g;
    *i = j;
    d;
    return d.1.1;
}

fn main() {
    println!("{}", c());
}