fn c() -> bool {
    let mut a = (0., true);
    let b = (0., false);
    let d = ((0. as f32, true as bool), (0. as f64, false as bool));
    let e = unsafe { f(core::ptr::addr_of_mut!(a) as *mut (f32, bool), d, true, true) };
    return e;
}

unsafe fn f(k: *mut (f32, bool), d: (f32, bool, f64, bool), g: bool, h: bool) -> bool {
    let i = core::ptr::addr_of!(d.1 .1) as *mut bool;
    let j = g;
    *i = j;
    d;
    return d.1 .1;
}

fn main() {
    println!("{}", c());
}