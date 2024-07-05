fn c() -> bool {
    let mut a_float = 0.;
    let mut a_bool = true;
    let mut b_float = 0.;
    let mut b_bool = false;
    let a = (a_float, a_bool);
    let b = (b_float, b_bool);
    let mut a_address = core::ptr::addr_of_mut!(a);
    let d_tuple = (a_address, b);
    let e = unsafe { f(d_tuple.0, d_tuple, true, true) };
    return e;
}

unsafe fn f(k: *mut (f32, bool), d: (*mut (f32, bool), (f64, bool)), g: bool, h: bool) -> bool {
    let i = core::ptr::addr_of!(d.1 .1) as *mut bool;
    let j = g;
    *i = j;
    d;
    return d.1 .1;
}

fn main() {
    println!("{}", c());
}