fn c() -> bool {
    let a_3 = false;
    let a = (core::ptr::null_mut(), 0.0, a_3);
    let i = core::ptr::addr_of!(a.2) as *mut bool;
    *i = true;
    a;
    a.2
}

fn main() {
    println!("{}", c());
}