fn c() -> bool {
    let mut a = (0., true);
    let k1 = (0., true);
    let k2 = 0.0;
    let k3 = false;
    let d = (&mut a, (k2, k3));
    let e = unsafe { f(&mut a, true) };
    return e;
}

unsafe fn f(k: *mut (f32, bool), g: bool) -> bool {
    let i = core::ptr::addr_of!((*k).1 .1) as *mut bool;
    let j = g;
    *i = j;
    return *i;
}

fn main() {
    println!("{}", c());
}