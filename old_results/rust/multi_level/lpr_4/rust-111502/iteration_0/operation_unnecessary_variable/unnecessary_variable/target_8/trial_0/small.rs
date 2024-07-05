fn c() -> bool {              
    let e = unsafe { f((1., false), true) };              
    return e;              
}              
              
unsafe fn f(d: (f64, bool), g: bool) -> bool {              
    let i = &mut d.1 .1;              
    *i = g;              
    return d.1 .1;              
}              
              
fn main() {              
    println!("{}", c());              
}