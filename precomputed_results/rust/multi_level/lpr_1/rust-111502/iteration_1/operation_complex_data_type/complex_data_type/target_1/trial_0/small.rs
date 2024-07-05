fn c() -> bool {
    let mut a_1 = 0.0;
    let mut a_2 = true;
    let e = unsafe { f(&mut a_1, (&mut a_1, (0.0, false)), true, true) };
    e
}

unsafe fn f(_: *mut f32, ptr_tuple: (*mut f32, (f64, bool)), g: bool, _: bool) -> bool {
    let (ptr_f32, (f64_val, bool_val)) = ptr_tuple;
    let i = core::ptr::addr_of!(bool_val) as *mut bool;
    *i = g;
    (ptr_f32, (f64_val, bool_val));
    *i
}

fn main() {
    println!("{}", c());
}