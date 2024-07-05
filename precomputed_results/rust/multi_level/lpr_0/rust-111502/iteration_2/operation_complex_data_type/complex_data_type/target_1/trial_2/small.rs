fn c() -> bool {
    let mut a: f32 = 0.0;
    let mut d_1_0: f32 = 0.0;
    let mut d_1_1: bool = false;
    unsafe { f(&mut a, (&mut a, (d_1_0, d_1_1)), true, true) }
}

unsafe fn f(k: *mut f32, d: (*mut f32, (f32, bool)), g: bool, h: bool) -> bool {
    let i: *mut bool = core::ptr::addr_of!((*d).1 .1) as *mut bool;
    *i = true;
    return (*d).1 .1;
}

fn main() {
    println!("{}", c());
}