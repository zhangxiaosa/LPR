fn c() -> bool {
    let mut a_1 = 0.0;
    let mut a_2 = true;
    let (mut d_1_ptr, (d_2_f64, d_2_bool)) = (unsafe { f(&mut a_1, (&mut a_1, (0.0, false)), true, true) });
    let d_1 = unsafe { *d_1_ptr };
    let d = (d_1, (d_2_f64, d_2_bool));

    d.2
}

unsafe fn f(_: *mut f32, d: (*mut f32, (f64, bool)), g: bool, _: bool) -> (*mut bool, (f64, bool)) {
    let i = core::ptr::addr_of!(d.1 .1) as *mut bool;
    *i = g;
    
    (i, d.1)
}

fn main() {
    println!("{}", c());
}