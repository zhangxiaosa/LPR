fn c() -> bool {
    let mut a = (0.0, true);
    unsafe { f(&mut a, true) }
}

unsafe fn f(_k: *mut (f64, bool), g: bool) -> bool {
    let i = core::ptr::addr_of_mut!((*_k).1) as *mut bool;
    *i = g;
    return (*_k).1;
}

fn main() {
    println!("{}", c());
}