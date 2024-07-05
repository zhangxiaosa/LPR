fn main() {
    let mut a = (0., true);
    let i = core::ptr::addr_of!((&mut a).1 .1) as *mut bool;
    *i = true;
    println!("{}", true);
}