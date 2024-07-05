fn c() -> bool {
    let mut a_f0 = 0.0;
    let mut a_f1 = true;
    let mut a = (&mut a_f0, &mut a_f1);
    unsafe { 
        let mut _k = &mut a;
        let mut d_f0 = core::ptr::addr_of_mut!(*_k);
        let mut d_f1_f0 = 1.0;
        let mut d_f1_f1 = false;
        let mut d_f1 = (&mut d_f1_f0, &mut d_f1_f1);
        let mut d = (&mut d_f0, &mut d_f1);
        let mut g = true;
        let mut i = core::ptr::addr_of!(*d.1.1);
        *i = g;
        let _ = d;
        return *d.1.1;
    }
}

unsafe fn f(_k: *mut (f64, bool), d: (*mut (f64, bool), (f64, bool)), g: bool) -> bool {
    let mut i = core::ptr::addr_of!((*d.1).1);
    *i = g;
    let _ = d;
    return (*d.1).1;
}

fn main() {
    println!("{}", c());
}