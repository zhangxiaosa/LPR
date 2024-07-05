fn c() -> bool {
    let mut a_0 = 0.0;
    let mut a_1 = true;

    let k1_0 = &mut a_0 as *mut f32;
    let k1_1 = &mut a_1 as *mut bool;
    let k1 = (k1_0, k1_1);
    let k2 = 0.0;
    let k3 = false;

    let d_0 = &mut k1.0 as *mut *mut f32;
    let d_1 = &mut k1.1 as *mut *mut bool;
    let d = (d_0, (k2, k3));
    let e = unsafe { f(d.0, d, true, true) };
    return e;
}

unsafe fn f(k: *mut *mut f32, d_0: (*mut *mut f32, (f64, bool)), g: bool, h: bool) -> bool {
    let i = *d_0.1 .0 as *mut bool;
    let j = g;
    *i = j;
    return *d_0.1 .0;
}

fn main() {
    println!("{}", c());
}