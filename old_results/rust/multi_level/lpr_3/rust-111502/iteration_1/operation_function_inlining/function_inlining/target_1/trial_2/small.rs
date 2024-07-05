fn c() -> bool {
    let mut a = 0.0;
    let d_0 = &mut a;
    let d_3 = false;
    let i = core::ptr::addr_of!(d.3) as *mut bool;
    *i = true;
    d.3;
}

fn main() {
    c();
}
