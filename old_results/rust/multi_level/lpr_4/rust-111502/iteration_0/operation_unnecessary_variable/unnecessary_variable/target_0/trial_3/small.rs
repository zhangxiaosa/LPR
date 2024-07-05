fn c() -> bool {
    let b = (1., false);
    let e = unsafe { f(core::ptr::null_mut(), b, true, true) };
    return e;
}

unsafe fn f(_: *mut (f32, bool), _: (f64, bool), g: bool, _: bool) -> bool {
    let i = core::ptr::null_mut() as *mut bool;
    let j = g;
    *i = j;
    return *i;
}

fn main() {
    println!("{}", c());
}