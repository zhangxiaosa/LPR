fn c() -> bool {
    let mut a_val_0 = 0.;
    let mut a_val_1 = true;
    let mut a = (a_val_0, a_val_1);
    let b_val_0 = 0.;
    let b_val_1 = false;
    let b = (b_val_0, b_val_1);
    let d_val_0 = &mut a;
    let d_val_1 = b;
    let d = (d_val_0, d_val_1);
    let e = unsafe { f(d_val_0, d, true, true) };
    return e;
}

unsafe fn f(k: *mut (f32, bool), d: (*mut (f32, bool), (f64, bool)), g: bool, h: bool) -> bool {
    let i_val = &mut d.1 .1;
    let i = i_val as *mut bool;
    let j = g;
    *i = j;
    d;
    return d.1 .1;
}

fn main() {
    println!("{}", c());
}