fn c() -> bool {
    let mut a = (0., true);
    let b = (0., false);
    let i = core::ptr::addr_of!((&mut a, b).1 .1) as *mut bool;
    *i = true;
    return (&mut a, b).1 .1;
}

fn main() {
    println!("{}", c());
}