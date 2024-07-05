fn c() -> bool {
    let mut a_float: f32 = 0.0;
    let mut a_bool: bool = true;
    let b_float: f32 = 0.0;
    let b_bool: bool = false;
    let a_ptr = &mut a_float as *mut f32;
    let d_ptr = a_ptr as *mut (f32, bool);
    let d_tuple = unsafe { (*d_ptr, (0.0, b_bool)) };
    let e = unsafe { f(a_ptr, d_tuple, true, true) };
    return e;
}

unsafe fn f(k: *mut f32, d: ((f32, bool), (f64, bool)), g: bool, h: bool) -> bool {
    let i = &mut d.1.1 as *mut bool;
    let j = g;
    *i = j;
    return d.1.1;
}

fn main() {
    println!("{}", c());
}