fn c() -> bool {
    let (mut a_f32, mut a_bool) = (0.0, true);
    let k1 = &mut a_f32 as *mut f32;
    let k2 = 0.0;
    let k3 = false;

    let d = (k1, (k2, k3));
    let e = unsafe { f(k1, d, true, true) };
    e
}

unsafe fn f(
    k_f32: *mut f32,
    d: (*mut f32, (f64, bool)),
    g: bool,
    h: bool,
) -> bool {
    let i = &mut (*d.1).1 as *mut bool;
    let j = g;
    *i = j;
    d;
    (*d.1).1
}

fn main() {
    println!("{}", c());
}