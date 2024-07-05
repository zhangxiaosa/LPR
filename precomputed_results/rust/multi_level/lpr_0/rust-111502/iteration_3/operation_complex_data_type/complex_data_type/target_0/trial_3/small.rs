fn c() -> f64 {
    let mut a = 0.0;
    let d = (core::ptr::null_mut(), (0.0, 0.0)); // Decomposed complex data type
    let i = core::ptr::addr_of!((d.1).1) as *mut f64; // Decomposed complex data type
    unsafe { *i = 1.0 };
    d.1 .1 // Decomposed complex data type
}

fn main() {
    println!("{}", c());
}