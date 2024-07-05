fn c() -> bool {
    let mut a: (f32, bool) = (0.0, true);
    let b: (f32, bool) = (0.0, false);
    let d_ptr: *mut (f32, bool) = &mut a;
    let d_tuple: (f64, bool) = b;
    let e: bool = unsafe { f(d_ptr, (d_ptr, d_tuple), true, true) };
    return e;
}

unsafe fn f(k: *mut (f32, bool), d: (*mut (f32, bool), (f64, bool)), g: bool, h: bool) -> bool {
    let i: *mut bool = &mut (*d.1).1;
    *i = g;
    d;
    return (*d.1).1;
}

fn main() {
    println!("{}", c());
}