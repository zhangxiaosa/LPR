fn c() -> bool {
    let mut a = 0.;
    let d_1_0 = 0.;
    
    let i = core::ptr::addr_of!((&mut a, (d_1_0, false)).1 .1) as *mut bool;
    *i = true;
    (&mut a, (d_1_0, false));
    return (&mut a, (d_1_0, false)).1 .1;
}

fn main() {
    println!("{}", c());
}