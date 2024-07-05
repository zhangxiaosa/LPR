fn c() -> bool {
    let mut a_float = 0.;
    let mut a_bool = true;
    let mut a = (&mut a_float, &mut a_bool);
    
    let b_float = 1.;
    let b_bool = false;
    let b = (&b_float, &b_bool);
    
    let d_float = &mut a_float;
    let d_bool = b_bool;
    let d = (d_float, d_bool);
    
    let e = unsafe { f(d, a_bool, true, true) };
    
    return e;
}

unsafe fn f(k: (*mut f32, bool), d1: bool, g: bool, h: bool) -> bool {
    let i = k.0;
    let j = g;
    *i = j;
    
    return d1;
}

fn main() {
    println!("{}", c());
}