fn c_float() -> bool {
    let mut a_float = 0.0;
    let mut a_bool = true;
    let b_float = 1.0;
    let b_bool = false;
    let d = (&mut a_float as *mut f32, (b_float, b_bool));
    let e = unsafe { f(&mut a_float, d, true, true) };
    return e;
}

unsafe fn f(k: *mut f32, d: (*mut f32, (f64, bool)), g: bool, h: bool) -> bool {
    let i = d.1.1 as *mut bool;
    let j = g;
    *i = j;
    return (*d.1).1;
}

fn main() {
    println!("{}", c_float());
}