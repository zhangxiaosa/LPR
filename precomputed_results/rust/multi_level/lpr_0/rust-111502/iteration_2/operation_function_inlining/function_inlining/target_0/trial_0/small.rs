fn main() {
    let mut a = 0.;
    let d_1_0 = 0.;
    let i = core::ptr::addr_of!(d.1 .1) as *mut bool;
    *i = true;
    println!("{}", d.1 .1);
}