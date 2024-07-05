fn c() -> bool {
    let mut a = (0., true);
    let b = (0., false);
    let d = (&mut a, b);
    let i = unsafe { core::ptr::addr_of!(d.1 .1) as *mut bool };
    *i = true;
    d.1 .1
}

fn main() {
    println!("{}", c());
}