fn c() -> bool {
    let mut a = 0.0;
    let d = unsafe { (&mut a, true, 0.0, false) };
    let g = true;
    let _: bool = true;
    let i = core::ptr::addr_of!(d.3) as *mut bool;
    *i = g;
    d;
    return d.3;
}

fn main() {
    println!("{}", c());
}