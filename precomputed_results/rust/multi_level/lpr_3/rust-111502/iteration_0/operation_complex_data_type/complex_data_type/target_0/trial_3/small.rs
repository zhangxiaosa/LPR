fn c() -> bool {
    let mut a = 0.;
    let (addr_a, b1, fp1, b2) = {
        let c = core::ptr::addr_of_mut!(a);
        (c, true, 0.0, false)
    };
    let e = unsafe { f(addr_a, (addr_a, b1, fp1, b2), true, true) };
    return e;
}

unsafe fn f(k: *mut f32, (addr_k, b1, fp1, b2): (*mut f32, bool, f64, bool), g: bool, h: bool) -> bool {
    let i = core::ptr::addr_of!(b2) as *mut bool;
    let j = g;
    *i = j;
    (addr_k, b1, fp1, *i);
    return *i;
}

fn main() {
    println!("{}", c());
}