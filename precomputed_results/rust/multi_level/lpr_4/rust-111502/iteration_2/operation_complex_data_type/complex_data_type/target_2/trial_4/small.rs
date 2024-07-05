fn c() -> bool {
    let mut a_0 = 0.0;
    let mut a_1 = true;
    
    unsafe { f(&mut a_0, &mut a_1, (core::ptr::addr_of_mut!(a_1), (1.0, false)), true) }
}

unsafe fn f(_k: *mut f64, _i: *mut bool, d_0: *mut (f64, bool), d_1_0: f64, d_1_1: bool, g: bool) -> bool {
    let i = _i;
    *i = g;
    
    // Not sure what the purpose of `d` is, as it doesn't seem to be used further.
    // If it's not required, you can remove the line `d;`.
    
    return d_1_1;
}

fn main() {
    println!("{}", c());
}