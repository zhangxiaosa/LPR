fn c() -> bool {
    let mut a_0 = 0.0;
    let mut a_1 = true;
    let mut a = (a_0, a_1);
    let e = unsafe { f(&mut a, (core::ptr::addr_of_mut!(a), (1., false)), true) };
    return e;
}

unsafe fn f(_k: *mut (f32, bool), d: (*mut (f32, bool), (f64, bool)), g: bool) -> bool {
    let (d_ptr, d_tuple) = d;
    let d_0 = *d_ptr;
    let d_1 = d_tuple;

    let i = core::ptr::addr_of!((d_1.1)) as *mut bool;
    *i = g;
    
    return d_1.1;
}

fn main() {
    println!("{}", c());
}