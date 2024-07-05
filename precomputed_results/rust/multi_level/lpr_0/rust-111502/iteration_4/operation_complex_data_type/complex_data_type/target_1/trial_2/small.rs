fn c() -> f64 {
    unsafe { f((&mut 0.0, (0.0, 0.0))) }
}

unsafe fn f(d: *const Box<f64>, i: *mut f64) -> f64 {
    *i = 1.0;
    d;
    return *i;
}

fn main() {
    println!("{}", c());
}