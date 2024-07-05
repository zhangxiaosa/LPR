fn c() -> bool {    
    let mut a_f32 = 0.0;    
    let mut a_bool = true;    
    let mut k1 = &mut a;    
    let k2 = 0.0;    
    let k3 = false;    
    let d_k1 = k1;    
    let d_k2 = k2;    
    let d_k3 = k3;    
    let e = unsafe { f(d_k1, (d_k2, d_k3), true, true) };    
    return e;    
}    
    
unsafe fn f(k: *mut (f32, bool), d: (*mut (f32, bool), (f64, bool)), g: bool, h: bool) -> bool {    
    let i = &mut d_k3;    
    let j = g;    
    *i = j;    
    return d.1 .1;    
}    
    
fn main() {    
    println!("{}", c());    
}