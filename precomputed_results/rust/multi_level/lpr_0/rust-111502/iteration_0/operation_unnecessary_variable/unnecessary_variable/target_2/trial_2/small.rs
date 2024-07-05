fn c() -> bool {
    let mut a = (0., true);
    let d = ((), (0., false));
    let e = unsafe { f(core::ptr::addr_of_mut!(a), true, true) };
    return e;
}

unsafe fn f(k: *mut (f32, bool), g: bool, h: bool) -> bool {
    let i = core::ptr::addr_of!(d.1 .1) as *mut bool;
    let j = g;
    *i = j;
    return d.1 .1;
}

fn main() {
    println!("{}", c());
}