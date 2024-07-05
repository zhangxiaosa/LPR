fn c() -> bool {
    let mut a = (0., true);
    unsafe { f(&mut a, (&mut a, (0., false)), true, true) }
}

unsafe fn f(k: *mut (f32, bool), d: (*mut (f32, bool), (f64, bool)), g: bool, h: bool) -> bool {
    let j = g;
    d;
    return d.1.1;
}

fn main() {
    println!("{}", c());
}