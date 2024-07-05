fn c() -> f64 {
    unsafe { f((0.0, (0.0, 0.0))) }
}

unsafe fn f(d: (f64, (f64, f64))) -> f64 {
    let i = d.1.1;
    i = 1.0;
    d;
    d.1.1
}

fn main() {
    println!("{}", c());
}