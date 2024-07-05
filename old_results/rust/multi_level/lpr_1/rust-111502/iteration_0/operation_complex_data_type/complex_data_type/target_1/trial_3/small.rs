fn c() -> bool {
    let mut a_0: f32 = 0.;
    let a_1: bool = true;
    let mut a: (f32, bool) = (a_0, a_1);

    let b_0: f32 = 0.;
    let b_1: bool = false;
    let b: (f32, bool) = (b_0, b_1);

    let a_ptr = &mut a as *mut (f32, bool);
    let d_0: *mut (f32, bool) = a_ptr;
    let d_1: (f64, bool) = (0., false);
    let d: (*mut (f32, bool), (f64, bool)) = (d_0, d_1);

    let e = unsafe { f(d.0, d, true, true) };
    
    return e;
}

unsafe fn f(k: *mut (f32, bool), d: (*mut (f32, bool), (f64, bool)), g: bool, h: bool) -> bool {
    let i_ptr = &mut d.1 .1 as *mut bool;
    let j = g;
    *i_ptr = j;

    return d.1 .1;
}

fn main() {
    println!("{}", c());
}