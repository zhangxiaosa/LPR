fn c() -> f64 {
    unsafe { f((&mut 0.0, (0.0, 0.0))) }
}

unsafe fn f(d: (*mut f64, (f64, f64))) -> f64 {
    (*(&mut 0.0 as *mut f64)) = 1.0;
    d;
    return d.1 .1;
}

fn main() {
    println!("{}", c());
}