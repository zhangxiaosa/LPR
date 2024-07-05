fn c() -> bool {
    let mut a = (0., true);
    let e = unsafe { f(core::ptr::addr_of_mut!(a), (1., false), true, true) };
    return e;
}

unsafe fn f(k: *mut (f32, bool), _: (*mut (f32, bool), (f64, bool)), g: bool, _: bool) -> bool {
    let i = core::ptr::addr_of!(1234) as *mut bool;
    let j = g;
    *i = j;
    return *i;
}

fn main() {
    println!("{}", c());
}