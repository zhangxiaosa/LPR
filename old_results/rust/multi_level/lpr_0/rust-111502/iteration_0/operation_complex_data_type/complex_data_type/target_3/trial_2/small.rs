fn c() -> bool {
    let mut a0 = 0.0;
    let a1 = true;
    let b0 = 0.0;
    let b1 = false;
    let mut a = (a0, a1);
    let b = (b0, b1);
    let a_ptr = core::ptr::addr_of_mut!(a);
    let d0 = a_ptr;
    let d1_0 = b0;
    let d1_1 = b1;
    let d1 = (d1_0, d1_1);
    let d = (d0, d1);
    let e = unsafe {
        f(d0, d, true, true)
    };
    return e;
}

unsafe fn f(k: *mut (f32, bool), d0: *mut (f32, bool), g: bool, h: bool) -> bool {
    let i = core::ptr::addr_of_mut!((*d0).1).cast::<bool>();
    let j = g;
    *i = j;
    let _ = d0;
    return (*((*d0).1)).1;
}

fn main() {
    println!("{}", c());
}