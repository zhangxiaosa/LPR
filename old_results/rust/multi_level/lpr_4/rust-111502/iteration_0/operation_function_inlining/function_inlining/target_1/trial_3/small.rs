fn c() -> bool {
    let mut a = (0., true);
    let b = (0., false);
    let i = core::ptr::addr_of!((0., false).1 .1) as *mut bool;
    let j = true;
    *i = j;
    b.1 .1
}

fn main() {
    println!("{}", c());
}