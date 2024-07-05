fn c() -> bool {
    let mut a = (0.0, true);
    unsafe { f(&mut a, (core::ptr::addr_of_mut!(a), (1.0, false)), true) }
}

unsafe fn f(_k: *mut (f64, bool), a: (*mut f64, bool, f64, bool), g: bool) -> bool {
    let (d1, d2, d3, d4) = a;
  
    let i = d2 as *mut bool;
    *i = g;
  
    return d4;
}

fn main() {
    println!("{}", c());
}