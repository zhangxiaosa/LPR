fn c() -> bool {
    let mut a0 = 0.0;
    let mut a1 = true;
    let b0 = 0.0;
    let b1 = false;
    let mut d0 = (core::ptr::addr_of_mut!(a0), b0);
    let mut d1 = (core::ptr::addr_of_mut!(a1), b1);
    let e = unsafe { f(&mut d0, (d1, (0.0, false)), true, true) };
    return e;
}

unsafe fn f(k: *mut (f32, bool), d: (*mut (f32, bool), (f64, bool)), g: bool, h: bool) -> bool {
    let i = core::ptr::addr_of!((*d.1).1) as *mut bool;
    let j = g;
    *i = j;
    return (*d.1).1;
}

fn main() {
    println!("{}", c());
}