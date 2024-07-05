fn c() {
    let mut a = 0.;
    let d_1_0 = 0.;
    let i = core::ptr::addr_of!(((&mut a, (d_1_0, false))).1 .1) as *mut bool;
    *i = true;
    d_1_0;
    println!("{}", ((&mut a, (d_1_0, false))).1 .1);
}

fn main() {
    c();
}