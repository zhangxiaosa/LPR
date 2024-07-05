fn c() -> bool {              
    let mut a_0 = 0.;              
    let mut a_1 = true;              
    let b_0 = 0.;              
    let b_1 = false;              
    unsafe { f(&mut(a_0, a_1) as *mut (f32, bool), (&mut(a_0, a_1) as *mut (f32, bool), (b_0, b_1)), true, true) }              
}              
              
unsafe fn f(k: *mut (f32, bool), d: (*mut (f32, bool), (f64, bool)), g: bool, h: bool) -> bool {              
    let i_0 = core::ptr::addr_of!(d.1 .1) as *mut bool;              
    *i_0 = g;              
    d;              
    return d.1 .1;              
}              
              
fn main() {              
    println!("{}", c());              
}