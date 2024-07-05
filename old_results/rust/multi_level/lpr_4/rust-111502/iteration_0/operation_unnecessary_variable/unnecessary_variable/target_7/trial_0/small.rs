fn c() -> bool {
    let mut a = (0., true);
    let e = unsafe { f(core::ptr::addr_of_mut!(a), (core::ptr::addr_of_mut!(a), (1., false)), true) };
    return e;
}

unsafe fn f(k: *mut (f32, bool), _: (*mut (f32, bool), (f64, bool)), g: bool) -> bool {
    let i = core::ptr::addr_of!(g) as *mut bool;
    *i = g;
    return g;
}

fn main() {
    println!("{}", c());
}