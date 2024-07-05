fn c() -> bool {
    let mut a = 0.;
    let d_1_0 = 0.;
    let k = &mut a as *mut f32;
    let d = (&mut a, (d_1_0, false));
    let g = true;
    let h = true;
    let i = core::ptr::addr_of!(d.1 .1) as *mut bool;
    *i = true;
    d;
    return d.1 .1;
}

fn main() {
    println!("{}", c());
}