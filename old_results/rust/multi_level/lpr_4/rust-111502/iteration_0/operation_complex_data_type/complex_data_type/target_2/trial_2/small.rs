fn c() -> bool {
    let mut a1: f32 = 0.;
    let a2: bool = true;
    
    let b1: f32 = 1.;
    let b2: bool = false;
    
    let mut a = (a1, a2);
    let b = (b1, b2);
    
    let d1: *mut (f32, bool) = &mut a;
    let d2_1: f64 = 0.; // update this value accordingly
    let d2_2: bool = false; // update this value accordingly
    let d = (d1, (d2_1, d2_2));
    
    let e = unsafe { f(d.0, d, true, true) };
    return e;
}

unsafe fn f(k: *mut (f32, bool), d: (*mut (f32, bool), (f64, bool)), g: bool, h: bool) -> bool {
    let i = &mut (*d.1).1;
    let j = g;
    *i = j;
    
    return (*d.1).1;
}

fn main() {
    println!("{}", c());
}