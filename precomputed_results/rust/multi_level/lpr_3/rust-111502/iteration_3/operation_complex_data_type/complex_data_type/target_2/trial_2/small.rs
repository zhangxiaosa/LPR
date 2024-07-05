fn c() -> bool {
    let mut a_0: *mut f32 = core::ptr::null_mut();
    let mut a_1: bool = true;
    let mut a_2: f64 = 0.0;
    let mut a_3: bool = false;
    let a_tuple = (a_0, a_1, a_2, a_3);
    unsafe { f(a_tuple, true, true) }
}

unsafe fn f(a: (*mut f32, bool, f64, bool), b: bool, _: bool) -> bool {
    let (mut p, mut first, mut second, mut third) = a;
    let i = &mut third as *mut bool;
    *i = b;
    let a_modified = (p, first, second, third);
    return a_modified.3;
}

fn main() {
    println!("{}", c());
}