fn main() {
    let mut a = 0.;
    core::ptr::addr_of!(0.) as *mut bool = true;
    println!("{}", false);
}
