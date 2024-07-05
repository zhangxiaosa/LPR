fn c() -> bool {
    let mut a = (0., true);
    let e = unsafe { f(core::ptr::addr_of_mut!(a), (0.0, false), true, true) };
    return e;
}

unsafe fn f(k: *mut (f32, bool), _: (f64, bool), g: bool, _: bool) -> bool {
    let i = core::ptr::addr_of!(k.1) as *mut bool;
    let j = g;
    *i = j;
    return k.1;
}

fn main() {
    println!("{}", c());
}