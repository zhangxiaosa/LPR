fn c() -> bool {
    let mut a = (0., true);
    let b = (0., false);
    let d = ((0., true), b);
    let e = unsafe { f(&(d.0), d, true, true) };
    return e;
}

unsafe fn f(k: &(f32, bool), d: ((f32, bool), (f64, bool)), g: bool, h: bool) -> bool {
    let i = &d.1 .1;
    let j = g;
    *i = j;
    return d.1 .1;
}

fn main() {
    println!("{}", c());
}