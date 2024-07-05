fn c() -> bool {
    let mut a = (0., true);
    let k1 = core::ptr::addr_of_mut!(a);
    let k2 = 0.0;
    let k3 = false;
    unsafe { f(k1, (k2, k3), true, true) }
}

unsafe fn f(k: *mut (f32, bool), _: (f64, bool), g: bool, _: bool) -> bool {
    *core::ptr::addr_of_mut!((*k).1) = g;
    (*k).1
}

fn main() {
    println!("{}", c());
}