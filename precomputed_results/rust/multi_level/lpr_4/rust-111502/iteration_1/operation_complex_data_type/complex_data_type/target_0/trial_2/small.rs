fn c() -> bool {
    let mut a: (f32, bool) = (0., true);
    let e: bool = unsafe { f(&mut a, (&mut a, (1., false)), true) };
    return e;
}

unsafe fn f(_k: *mut (f32, bool), d: (*mut (f32, bool), (f64, bool)), g: bool) -> bool {
    let i: *mut bool = core::ptr::addr_of!((&mut d.1).1) as *mut bool;
    *i = g;
    d;
    return d.1.1;
}

fn main() {
    println!("{}", c());
}