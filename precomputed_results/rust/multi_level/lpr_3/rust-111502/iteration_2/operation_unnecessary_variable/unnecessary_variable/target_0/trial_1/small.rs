fn c() -> bool {
    let e = unsafe { f((std::ptr::null_mut(), true, 0.0, false), true, true) };
    return e;
}

unsafe fn f(_: (*mut f32, bool, f64, bool), b: bool, _: bool) -> bool {
    return b;
}

fn main() {
    println!("{}", c());
}