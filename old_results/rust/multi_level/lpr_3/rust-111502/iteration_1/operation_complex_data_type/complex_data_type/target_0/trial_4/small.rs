fn c() -> bool {
    let mut a = 0.0;
    let mut d_0 = &mut a;
    let mut d_1 = true;
    let mut d_2 = 0.0;
    let mut d_3 = false;
    let mut e = unsafe {
        let k = d_0 as *mut f32;
        let d = (d_0 as *mut f32, d_1, d_2, d_3);
        let g = true;
        let _ = true;
        f(k, d, g, _)
    };
    return e;
}

unsafe fn f(k: *mut f32, d_1: bool, d_2: f64, g: bool) -> bool {
    let i = core::ptr::addr_of!(g) as *mut bool;
    *i = g;
    return g;
}

fn main() {
    println!("{}", c());
}