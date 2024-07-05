fn c() -> bool {    
    let mut a: f32 = 0.0;    
    let d_0: *mut f32 = {ADDRESS_OF_A};    
    let d_1: bool = true;    
    let d_2: f64 = 0.0;    
    let d_3: bool = false;    
    let e: bool = unsafe { f(d_0, (d_0, d_1, d_2, d_3), true, true) };    
    return e;    
}    
    
fn f(k: *mut f32, d: (*mut f32, bool, f64, bool), g: bool, h: bool) -> bool {    
    let i: *mut bool = {ADDRESS_OF_D_3};    
    let j: bool = g;    
    *i = j;    
    return d.3;    
}    
    
fn main() {    
    println!("{}", c());    
}