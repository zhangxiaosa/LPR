fn main() {
    let b = (0., false);

    let i = core::ptr::addr_of!(b.1) as *mut bool;
    *i = true;
    b;

    println!("{}", b.1);
}