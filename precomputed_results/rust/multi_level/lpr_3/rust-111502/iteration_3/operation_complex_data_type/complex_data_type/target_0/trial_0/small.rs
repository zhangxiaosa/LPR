fn c() -> bool {
    let mut a = 0.0;
    unsafe { f((&mut a, true, 0.0, false), true, true) }
}

unsafe fn f(a: (*mut f32, bool, f64, bool), b: bool, _: bool) -> bool {
    let i = core::ptr::addr_of!(a.3) as *mut bool;
    *i = b;
    let (pointer_a, bool_value_1, f64_value, bool_value_2) = a;
    let mut a = *pointer_a;
    a;
    return bool_value_2;
}

fn main() {
    println!("{}", c());
}