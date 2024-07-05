fn c() -> bool {
    let mut a_f32 = 0.;
    let mut a_bool = true;
    
    let mut a = (&mut a_f32, &mut a_bool);
    
    let b_f32 = 0.;
    let b_bool = false;
    let b = (b_f32, b_bool);
    
    let d_a_f32 = a.0;
    let d_a_bool = a.1;
    let d_b_f64 = b.0;
    let d_b_bool = b.1;
    let d = (&mut d_a_f32, &mut d_a_bool, d_b_f64, d_b_bool);
    
    let e = unsafe { f(a.0, d, true, true) };
    
    return e;
}

unsafe fn f(k: *mut f32, d: (*mut f32, *mut bool, f64, bool), g: bool, h: bool) -> bool {
    let i = d.1;
    let j = g;
    *i = j;
    
    return d.3;
}

fn main() {
    println!("{}", c());
}