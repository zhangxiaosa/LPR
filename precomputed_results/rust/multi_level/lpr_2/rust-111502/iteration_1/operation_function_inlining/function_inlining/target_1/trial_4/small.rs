fn c() -> bool {
    let mut a = (0., true);
    let b = (0., false);

    let d = (&mut a, b);
    let g = true;
    let h = true;

    let i = core::ptr::addr_of!(d.1 .1) as *mut bool;
    *i = g;
    d;
    return d.1 .1;
}

fn main() {
    println!("{}", c());
}