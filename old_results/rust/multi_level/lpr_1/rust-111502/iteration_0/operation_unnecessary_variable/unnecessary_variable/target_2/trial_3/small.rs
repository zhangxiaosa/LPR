fn c() -> bool {
    let mut a = (0., true);
    let k1 = (0., true);
    let k2 = 0.0;
    let k3 = false;
    let d = (&mut a, (k2, k3));
    let _e = unsafe { f(&mut a, (&mut a, (k2, k3)), true, true) };
    return _e;
}

unsafe fn f(k: *mut (f32, bool), d: (*mut (f32, bool), (f64, bool)), g: bool, _h: bool) -> bool {
    let i = core::ptr::addr_of!((*d.1).1) as *mut bool;
    let j = g;
    *i = j;
    return *i;
}

fn main() {
    println!("{}", c());
}