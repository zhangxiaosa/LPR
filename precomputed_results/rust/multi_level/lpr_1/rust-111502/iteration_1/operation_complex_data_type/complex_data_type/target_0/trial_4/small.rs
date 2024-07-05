fn c() -> bool {
    let mut a_0 = 0.0;
    let mut a_1 = true;
    let e = unsafe { f(&mut a_0, &mut a_1, (&mut a_0, (0.0, false)), true, true) };
    e
}

unsafe fn f(_: *mut f32, _: *mut bool, d: (*mut f32, (f64, bool)), g: bool, _: bool) -> bool {
    let i = core::ptr::addr_of!((d.1).1) as *mut bool;
    *i = g;
    *i
}

fn main() {
    println!("{}", c());
}