fn c() -> bool {
    let mut a = (0., true);
    let b = (0., false);
    let d = ((0., true), (0., false));
    let e = unsafe { f(&mut a, d, true, true) };
    return e;
}

unsafe fn f(k: *mut bool, d: ((f32, bool), (f64, bool)), g: bool, h: bool) -> bool {
    let i = &mut d.1.1;
    let j = g;
    *i = j;
    d;
    return d.1.1;
}

fn main() {
    println!("{}", c());
}