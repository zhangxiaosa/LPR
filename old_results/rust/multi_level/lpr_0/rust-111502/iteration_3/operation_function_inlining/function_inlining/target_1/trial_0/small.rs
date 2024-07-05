fn c() -> bool {
    let mut a = 0.;
    let d = (&mut a, (0., false));
    let i = core::ptr::addr_of!(d.1 .1) as *mut bool;
    *i = true;
    d.1 .1
}

fn main() {
    println!("{}", c());
}