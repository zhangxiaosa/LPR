fn c() -> bool {
    unsafe { f(&mut (0., true), (&mut (0., true), (0.0, false)), true, true) }
}

unsafe fn f(k: *mut (f32, bool), (d_ptr_f32, d_ptr_bool, second_tuple_0_f32, second_tuple_0_bool, second_tuple_1_f64, second_tuple_1_bool): (*mut (f32, bool), (f32, bool), (f64, bool)), g: bool, _: bool) -> bool {
    let i = core::ptr::addr_of!(second_tuple_1_bool) as *mut bool;
    *i = true;
    second_tuple_0_bool
}

fn main() {
    println!("{}", c());
}