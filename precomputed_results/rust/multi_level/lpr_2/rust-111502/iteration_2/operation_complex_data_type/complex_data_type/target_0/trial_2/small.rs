fn c() -> bool {
    unsafe { f(&mut (0., true), (&mut (0., true), (0.0, false)), true, true) }
}

unsafe fn f(k: *mut (f32, bool), d: (*mut (f32, bool), (f64, bool)), g: bool, _: bool) -> bool {
    let (d_0_ptr, d_1_tuple) = d;
    let (d_1_0, d_1_1) = d_1_tuple;

    let i = core::ptr::addr_of!((*(d_1_ptr)).1) as *mut bool;
    *i = true;

    d;
    d_1_1
}

fn main() {
    println!("{}", c());
}