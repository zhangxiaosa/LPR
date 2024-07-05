fn c() -> bool {
    let mut a_0: f64 = 0.0;
    let mut a_1: bool = true;
    unsafe { f(&mut (a_0, a_1), (&mut a_0 as *mut f64, (1.0, false)), true) }
}

unsafe fn f(_k: *mut (f64, bool), d: (*mut (f64, bool), (f64, bool)), g: bool) -> bool {
    let i = d.1 .1 as *mut bool;
    *i = g;
    d;
    return d.1 .1;
}

fn main() {
    println!("{}", c());
}