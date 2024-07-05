fn c() -> f64 {
    f((&mut 0.0, (0.0, 0.0)))
}

fn f(d: (*mut f64, (f64, f64))) -> f64 {
    let _i = core::ptr::addr_of!(d.1 .1) as *mut f64;
    *_i = 1.0;
    d.1 .1
}

fn main() {
    println!("{}", c());
}
