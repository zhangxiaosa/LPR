fn c() -> bool {
    let mut a_0: (f32, bool) = (0., true);
    let b: (f32, bool) = (0., false);
    let d_ptr: *mut (f32, bool) = core::ptr::addr_of_mut!(a_0);
    let d_tuple: (*mut (f32, bool), (f64, bool)) = (d_ptr, (d_ptr, b));
    let e: bool = unsafe { f(d_ptr, d_tuple, true, true) };
    return *i;
}

unsafe fn f(k: *mut (f32, bool), d: (*mut (f32, bool), (f64, bool)), g: bool, h: bool) -> bool {
    let i: *mut bool = core::ptr::addr_of!(d.1 .1) as *mut bool;
    let j: bool = g;
    *i = j;
    d;
    return *i;
}

fn main() {
    println!("{}", c());
}