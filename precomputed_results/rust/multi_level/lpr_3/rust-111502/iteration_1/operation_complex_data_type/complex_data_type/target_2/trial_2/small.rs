fn c() -> bool {
    let mut a = 0.0;
    let mut d_0 = &mut a;
    let e = unsafe { f(d_0) };
    e
}

unsafe fn f(k: *mut f32) -> bool {
    let mut i = core::ptr::addr_of!(*k) as *mut bool;
    *i = true;
    true
}

fn main() {
    println!("{}", c());
}