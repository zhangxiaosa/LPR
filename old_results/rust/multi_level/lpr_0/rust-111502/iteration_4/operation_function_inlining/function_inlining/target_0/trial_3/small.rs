fn c() -> f64 {
    let d: (*mut f64, (f64, f64)) = (&mut 0.0, (0.0, 0.0));
    let i = core::ptr::addr_of!(d.1 .1) as *mut f64;
    *i = 1.0;
    d.1 .1
}

fn main() {
    println!("{}", c());
}