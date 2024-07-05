fn main() {
    let d = (std::ptr::null_mut(), (1.0, false));
    let i = std::ptr::addr_of!(d.1 .1) as *mut bool;
    *i = true;
    d;
    println!("{}", d.1 .1);
}