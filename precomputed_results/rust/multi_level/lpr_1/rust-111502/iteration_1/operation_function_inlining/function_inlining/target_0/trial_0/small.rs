fn c() -> bool {
    let mut a = (0., true);
    let d = (*core::ptr::addr_of!((0., false)).0, true);
    let g = true;
    let i = core::ptr::addr_of!(d.1) as *mut bool;
    *i = g;
    d;
    *i
}

fn main() {
    println!("{}", c());
}