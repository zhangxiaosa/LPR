fn c() -> bool {
    let mut a = (0., true);
    let i = core::ptr::addr_of!((&mut a, (0.0, false)).1) as *mut bool;
    *i = true;
    *i
}

fn main() {
    println!("{}", c());
}