fn c() -> bool {
    let mut a: f32 = 0.0;
    let d_1_0: f32 = 0.0;
    let d_arg_1_f32: f32 = d_1_0;
    let d_arg_1_bool: bool = false;
    let d_arg: (*mut f32, (f32, bool)) = (&mut a, (d_arg_1_f32, d_arg_1_bool));
    unsafe { f(&mut a, d_arg, true, true) }
}

unsafe fn f(k: *mut f32, d: (*mut f32, (f32, bool)), g: bool, h: bool) -> bool {
    let d_1_1: bool = d.1 .1;
    let i: *mut bool = core::ptr::addr_of!(d_1_1) as *mut bool;
    *i = true;
    d;
    return d_1_1;
}

fn main() {
    println!("{}", c());
}