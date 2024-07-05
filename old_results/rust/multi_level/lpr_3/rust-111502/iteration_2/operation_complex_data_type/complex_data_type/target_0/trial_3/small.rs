fn c() -> bool {
    let e = unsafe { f((&mut 0.0, true, 0.0, false), true, true) };
    return e;
}

unsafe fn f(d: (*mut f32, bool, f64, bool), g: bool, _: bool) -> bool {
    let i = core::ptr::addr_of!(d.3) as *mut bool;
    *i = g;
    return d.3;
}

fn main() {
    println!("{}", c());
}
