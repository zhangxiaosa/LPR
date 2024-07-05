fn c() -> bool {
    let mut a = (0., true);
    let b = (0., false);
    let i = core::ptr::addr_of!(b.1) as *mut bool;
    let j = true;
    *i = j;
    let e = b.1;
    return e;
}

fn main() {
    println!("{}", c());
}