fn c() -> bool {
    let mut a_0 = 0.;
    let mut a_1 = true;
    let mut a = (&mut a_0, &mut a_1);
    
    let b_0 = 1.;
    let b_1 = false;
    let b = (&b_0, &b_1);
    
    let d_0 = &mut a;
    let d_1_0 = *b_0;
    let d_1_1 = *b_1;
    let d = (d_0, (d_1_0, d_1_1));
    
    let e = unsafe { f(a.0, d, true, true) };
    
    e
}

unsafe fn f(k: *mut (f32, bool), d: (*mut (*mut f32, *mut bool), (f64, bool)), g: bool, h: bool) -> bool {
    let i = d.1 .1 as *mut bool;
    let j = g;
    *i = j;
    
    d.1 .1
}

fn main() {
    println!("{}", c());
}