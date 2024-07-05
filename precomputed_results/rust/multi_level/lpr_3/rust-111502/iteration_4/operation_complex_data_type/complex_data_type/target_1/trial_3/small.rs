fn c() -> bool {
    let a_3 = false;
    let a = core::ptr::null_mut();
    let b = 0.0;
    let c = a_3;
    let result = unsafe { f((a, b, c), true) };
    result
}

unsafe fn f(a: (*mut f32, f64, bool), b: bool) -> bool {
    let i: *mut bool = core::ptr::addr_of!(a.2) as *mut bool;
    *i = b;
    a;
    a.2
}

fn main() {
    println!("{}", c());
}