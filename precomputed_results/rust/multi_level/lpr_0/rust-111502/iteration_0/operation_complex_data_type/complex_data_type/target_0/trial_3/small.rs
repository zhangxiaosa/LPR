fn c() -> bool {
    let mut a_0: f32 = 0.;
    let mut a_1: bool = true;
    let mut a = (a_0, a_1);
    
    let mut b_0: f32 = 0.;
    let mut b_1: bool = false;
    let b = (b_0, b_1);
    
    let mut a_addr = core::ptr::addr_of_mut!(a);

    let mut d_0 = a_addr;
    let mut d_1_0 = 0.0;
    let mut d_1_1 = false;
    let d_1 = (d_1_0, d_1_1);
    let d = (d_0, d_1);
    
    let e = unsafe {
        let d_0 = d.0;
        let d_1 = d.1;
        let d_1_0 = d_1.0;
        let d_1_1 = d_1.1;
        f(d_0, d_1, true, true)
    };
    
    return e;
}

unsafe fn f(k: *mut (f32, bool), d_0: *mut (f32, bool), g: bool, h: bool) -> bool {
    let i = core::ptr::addr_of!((*d_0).1).cast::<bool>();
    let j = g;
    *i = j;
    return (*d_0).1;
}

fn main() {
    println!("{}", c());
}