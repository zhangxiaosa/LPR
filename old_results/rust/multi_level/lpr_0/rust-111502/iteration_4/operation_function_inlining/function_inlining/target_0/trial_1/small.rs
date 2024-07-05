fn c() -> f64 {
    let d = (&mut 0.0, (0.0, 0.0));
    let i = unsafe { core::ptr::addr_of!(d.1 .1) as *mut f64 };
    *i = 1.0;
    d.1.1
}

fn main() {
    println!("{}", c());
}