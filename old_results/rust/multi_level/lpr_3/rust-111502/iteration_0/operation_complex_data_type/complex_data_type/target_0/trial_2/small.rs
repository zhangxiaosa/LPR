fn c() -> bool {
    let mut a = 0.;

    let d0 = core::ptr::addr_of_mut!(a);
    let d1 = true;
    let d2 = 0.0;
    let d3 = false;

    let e = unsafe { f(d0, (d0, d1, d2, d3), true, true) };
    return d3;
}

unsafe fn f(k: *mut f32, d: (*mut f32, bool, f64, bool), g: bool, h: bool) -> bool {
    let i = core::ptr::addr_of!(d.3) as *mut bool;
    let j = g;
    *i = j;
    (d.0, d.1, d.2, *i);
}

fn main() {
    println!("{}", c());
}