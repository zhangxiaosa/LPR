fn c() -> bool {
    let mut a_0: f32 = 0.0;
    let mut a_1: bool = true;

    let b_0: f32 = 0.0;
    let b_1: bool = false;

    let mut a = (a_0, a_1);
    let b = (b_0, b_1);

    let a_ptr = &mut a as *mut (f32, bool);
    let d_ptr = a_ptr as *mut (f32, bool);
    let d_0 = d_ptr;
    let d_1_0: f64 = 0.0;
    let d_1_1: bool = false;
    let d_1 = (d_1_0, d_1_1);
    let d = (d_0, d_1);
    
    let e = unsafe { f(a_ptr, d, true, true) };
    return e;
}

unsafe fn f(k: *mut (f32, bool), d: (*mut (f32, bool), (f64, bool)), g: bool, h: bool) -> bool {
    let i = d.1.1;
    let j = g;
    *i = j;
    return d.1.1;
}

fn main() {
    println!("{}", c());
}