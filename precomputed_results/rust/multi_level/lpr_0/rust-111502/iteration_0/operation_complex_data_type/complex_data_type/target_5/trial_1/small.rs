fn c() -> bool {
    let mut a_0 = 0.;
    let a_1 = true;
    let b_0 = 0.;
    let b_1 = false;
    let mut a = (a_0, a_1);
    let b = (b_0, b_1);
    let a_addr = core::ptr::addr_of_mut!(a);
    let d_0 = a_addr;
    let d_1_0 = b_0;
    let d_1_1 = b_1;
    let d = (d_0, (d_1_0, d_1_1));
    let e = unsafe { f(d_0, d, true, true) };
    return e;
}

unsafe fn f(k: *mut (f32, bool), d_0: *mut (f32, bool), g: bool, h: bool) -> bool {
    let i = core::ptr::addr_of!((*d_0).1).1 as *mut bool;
    let j = g;
    *i = j;
    let d = (*d_0, ((*d_0).1).1);
    return d;
}

fn main() {
    println!("{}", c());
}