fn c() -> bool {
    let mut a = (0., true);
    let b = (0., false);
    let e = unsafe { f(&mut a, b, true, true) };
    return e;
}

unsafe fn f(k: *mut (f32, bool), (d1, d2): (*mut (f32, bool), (f64, bool)), g: bool, _h: bool) -> bool {
    let i = &mut d2.1;
    let j = g;
    *i = j;
    return d2.1;
}

fn main() {
    println!("{}", c());
}
