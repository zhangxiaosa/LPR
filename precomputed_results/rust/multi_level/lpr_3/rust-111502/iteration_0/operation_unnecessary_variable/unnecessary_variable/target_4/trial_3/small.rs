fn c() -> bool {
    let mut a = 0.0;
    let d_0 = core::ptr::addr_of_mut!(a);
    let d_3 = false;
    let e = false;
    return e;
}

fn main() {
    println!("{}", c());
}