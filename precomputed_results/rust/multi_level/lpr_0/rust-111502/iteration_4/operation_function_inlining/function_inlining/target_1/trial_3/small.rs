fn c() -> f64 {
    let d = (&mut 0.0, (0.0, 0.0));

    // Inlined code from `f` function
    let i = core::ptr::addr_of!(d.1 .1) as *mut f64;
    *i = 1.0;

    d.1 .1
}

fn main() {
    println!("{}", c());
}