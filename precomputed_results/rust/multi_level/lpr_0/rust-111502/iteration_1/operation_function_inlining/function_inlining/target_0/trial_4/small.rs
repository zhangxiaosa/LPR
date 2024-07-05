fn main() {
    let mut a = (0., true);
    let i = core::ptr::addr_of!((&mut a, (0., false)).1 .1) as *mut bool;
    unsafe {
        *i = true;
    }
    println!("{}", (&mut a, (0., false)).1 .1);
}