fn c() -> bool {
    let mut a = (0., true);
    let b = (0., false);
    let i = core::ptr::addr_of!((b.1)) as *mut bool;
    unsafe {
        *i = true;
        b.1
    }
}

fn main() {
    println!("{}", c());
}