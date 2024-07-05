fn c() -> bool {
    let mut a = (0.0, true);
    let mut d = (&mut a, (1.0, false));
    let i = core::ptr::addr_of!((d.1).1) as *mut bool;
    *i = true;
    d;
    return (d.1).1;
}

fn main() {
    c();
}