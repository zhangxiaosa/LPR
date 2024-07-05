fn c() -> bool {
    let mut a = 0.;
    let i = core::ptr::addr_of!((&mut a, (0., false)).1 .1) as *mut bool;
    *i = true;
    return (&mut a, (0., false)).1 .1;
}

fn main() {
    println!("{}", c());
}