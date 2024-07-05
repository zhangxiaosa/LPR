fn c() -> bool {
    let mut a = (0., true);
    let a_0 = a.0;
    let a_1 = a.1;
    
    let b = (0., false);
    let b_0 = b.0;
    let b_1 = b.1;
    
    let d_tuple = b;
    
    let e = unsafe { f(&mut a_0, (core::ptr::addr_of_mut!(a_1), d_tuple), true, true) };
    
    return e;
}

unsafe fn f(k: *mut f32, d: (*mut (f32, bool), (f64, bool)), g: bool, h: bool) -> bool {
    let temp_ptr = d.1;
    let i = core::ptr::addr_of!(temp_ptr.1) as *mut bool;
    **i = g;
  
    return d.1 .1;
}

fn main() {
    println!("{}", c());
}