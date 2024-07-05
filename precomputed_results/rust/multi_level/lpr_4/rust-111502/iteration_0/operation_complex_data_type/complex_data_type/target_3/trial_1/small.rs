fn c() -> bool {
    let mut a_f32 = 0.;
    let mut a_bool = true;
    let b_f32 = 1.;
    let b_bool = false;
    let a = (&mut a_f32, &mut a_bool);
    let b = (b_f32, b_bool);
    let d = (a, b);
    let e = unsafe { f(d.0 .0, d, true, true) };
    return e;
}

unsafe fn f(k: *mut f32, d: ((*mut f32, *mut bool), (f64, bool)), g: bool, h: bool) -> bool {
    let i = d.1 .1 as *mut bool;
    let j = g;
    *i = j;
    return d.1 .1;
}

fn main() {
    println!("{}", c());
}