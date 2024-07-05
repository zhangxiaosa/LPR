fn c() -> bool {
    let mut a = true;
    unsafe { f(&mut a, (core::ptr::addr_of_mut!(a), true), true) }
}

unsafe fn f(_k: *mut (f32, bool), d: (*mut (f32, bool), bool), g: bool) -> bool {
    *d.0 = g;
    d.1
}

fn main() {
    println!("{}", c());
}