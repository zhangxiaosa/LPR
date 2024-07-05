fn c() -> bool {
    let mut a = (0.0, true);
    let i = core::ptr::addr_of!(a).add(1) as *mut bool;
    *i = true;
    (core::ptr::addr_of_mut!(a), (1.0, false)).1.1
}

fn main() {
    println!("{}", c());
}