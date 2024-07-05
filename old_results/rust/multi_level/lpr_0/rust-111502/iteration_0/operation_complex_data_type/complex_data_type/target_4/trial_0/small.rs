fn c() -> bool {
    let mut a_f32 = 0.0;
    let mut a_bool = true;
    let mut a = (a_f32, a_bool);
    
    let b_f32 = 0.0;
    let b_bool = false;
    let b = (b_f32, b_bool);
    
    let d_0 = &mut a;
    let d_1 = b;
    let d = (d_0, d_1);
    
    let e = unsafe { f(d_0, d, true, true) };
    
    return e;
}

unsafe fn f(k: *mut (f32, bool), d: (*mut (f32, bool), (f64, bool)), g: bool, h: bool) -> bool {
    let i = &mut (*d_1_1).1;
    let j = g;
    *i = j;
    
    return d.1 .1;
}

fn main() {
    println!("{}", c());
}