fn c() -> bool {
    let mut a_0: f32 = 0.;
    let mut a_1: bool = true;
    let b_0: f32 = 0.;
    let b_1: bool = false;
    let d_ptr_0: f32 = a_0;
    let d_ptr_1: bool = a_1;
    let d_tuple_0: f32 = b_0;
    let d_tuple_1: bool = b_1;
    let e: bool = unsafe { f(&mut (d_ptr_0, d_ptr_1), (&mut (d_ptr_0, d_ptr_1), (d_tuple_0, d_tuple_1)), true, true) };
    return e;
}

unsafe fn f(k_0: *mut f32, d_0: (*mut f32, (f64, bool)), g_0: bool, h_0: bool) -> bool {
    let i_0: *mut bool = &mut (d_0.1).1;
    let j_0: bool = g_0;
    *i_0 = j_0;
    d_0;
    return (d_0.1).1;
}

fn main() {
    println!("{}", c());
}