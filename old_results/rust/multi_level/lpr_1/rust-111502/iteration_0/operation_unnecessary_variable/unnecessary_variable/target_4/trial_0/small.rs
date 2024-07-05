fn c() -> bool {              
    let mut a = (0., true);              
    let e = unsafe { f(&mut a, (&mut a, (a.1).0), true, true) };              
    return e;              
}              
              
unsafe fn f(_k: *mut (f32, bool), _d: (*mut (f32, bool), (f64, bool)), g: bool, _h: bool) -> bool {              
    let i = core::ptr::addr_of!((_d.1).1) as *mut bool;              
    *i = g;              
    return *i;              
}              
              
fn main() {              
    println!("{}", c());              
}