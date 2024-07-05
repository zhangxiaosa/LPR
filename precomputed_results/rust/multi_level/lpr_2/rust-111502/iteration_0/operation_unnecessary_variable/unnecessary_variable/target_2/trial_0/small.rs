fn c() -> bool {
    let mut a = (0., true);
    let b = (0., false);
    let e = unsafe { f(&mut a, (&mut a, b), true, true) };
    return a.1;
}

unsafe fn f(k: *mut (f32, bool), _: (*mut (f32, bool), (f64, bool)), g: bool, _: bool) -> bool {
    *k = (0., g);
    g
}

fn main() {
    println!("{}", c());
}