fn c() -> bool {
    let mut a = (0., true);
    let e = unsafe { f((&mut a.0 as *mut f32, &mut a.1 as *mut bool), ((&mut a.0 as *mut f32, &mut a.1 as *mut bool), (1., false)), true) };
    return e;
}

unsafe fn f(d: (*mut (f32, bool), (f64, bool)), g: bool) -> bool {
    let i = core::ptr::addr_of!(d.1 .1) as *mut bool;
    *i = g;
    d;
    return d.1 .1;
}

fn main() {
    println!("{}", c());
}