fn c() -> bool {
    let mut a = (0., true);
    let b = (0., false);
    let d = (&mut a, b);
    let i = core::ptr::addr_of!((*d.0).1) as *mut bool;
    let j = true;
    *i = j;
    return (*d.0).1;
}

fn main() {
    println!("{}", c());
}