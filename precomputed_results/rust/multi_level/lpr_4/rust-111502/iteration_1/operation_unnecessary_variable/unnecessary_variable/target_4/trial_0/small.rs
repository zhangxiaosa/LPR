fn c() -> bool {
    let mut a = (0.0, true);
    return unsafe { f(&mut a, (core::ptr::addr_of_mut!(a), (1.0, false)), true) };
}

unsafe fn f(_k: *mut (f32, bool), _d: (*mut (f32, bool), (f64, bool)), _g: bool) -> bool {
    true
}

fn main() {
    println!("{}", c());
}