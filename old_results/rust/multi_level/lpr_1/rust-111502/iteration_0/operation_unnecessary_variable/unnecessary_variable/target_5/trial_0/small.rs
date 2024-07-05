fn c() -> bool {
    let mut a = (0., true);
    let k3 = false;
    let d = (&mut a, (k3));
    let e = unsafe { f(&mut a, (&mut a, (k3)), true, true) };
    return e;
}

unsafe fn f(k: *mut (f32, bool), d: (*mut (f32, bool), bool), g: bool, h: bool) -> bool {
    let i = core::ptr::addr_of!(d.1) as *mut bool;
    *i = g;
    d;
    return *i;
}

fn main() {
    println!("{}", c());
}