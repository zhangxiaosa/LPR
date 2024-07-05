fn main() {
    let i = core::ptr::addr_of!((&mut 0.0, (0.0, 0.0))).1 .1 as *mut f64;
    *i = 1.0;
    println!("{}", (&mut 0.0, (0.0, 0.0))).1 .1);
}
