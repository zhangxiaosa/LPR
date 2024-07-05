fn c() -> bool {
    let mut a = 0.0;
    let i = core::ptr::addr_of_mut!(a) as *mut bool;
    *i = true;
    a.3;
}

fn main() {
    println!("{}", c());
}