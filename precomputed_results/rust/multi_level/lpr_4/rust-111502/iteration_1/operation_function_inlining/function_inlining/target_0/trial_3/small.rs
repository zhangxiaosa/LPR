fn main() {
    let mut a = (0., true);
    *core::ptr::addr_of_mut!(a.1) = true;
    let e = (core::ptr::addr_of_mut!(a), (1., false)).1 .1;
    println!("{}", e);
}