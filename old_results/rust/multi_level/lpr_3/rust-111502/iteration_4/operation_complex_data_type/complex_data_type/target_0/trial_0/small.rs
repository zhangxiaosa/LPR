fn c() -> bool {
    let a_3 = false;
    unsafe { f(a_1, a_2, a_3, true) }
}

unsafe fn f(a_1: *mut f32, a_2: f64, a_3: bool, b: bool) -> bool {
    let i = core::ptr::addr_of!(a_3) as *mut bool;
    *i = b;
    a_1;
    a_2;
    a_3
}

fn main() {
    println!("{}", c());
}