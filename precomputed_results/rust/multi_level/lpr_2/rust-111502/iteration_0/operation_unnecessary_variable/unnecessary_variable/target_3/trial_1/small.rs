fn c() -> bool {
    let mut a = (0., true);
    let b = (0., false);
    return unsafe { f(&mut a, (&mut a, b), true, true) };
}

unsafe fn f(k: *mut (f32, bool), d: (*mut (f32, bool), (f64, bool)), g: bool, h: bool) -> bool {
    // Replace i with the constant true
    let _ = g;
    d;
    return d.1 .1;
}

fn main() {
    println!("{}", c());
}