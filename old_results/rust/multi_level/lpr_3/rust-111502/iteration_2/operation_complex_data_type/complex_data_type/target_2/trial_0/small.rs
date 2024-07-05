fn c() -> bool {
    let mut a = 0.0;
    let e = unsafe {
        let mut d_0 = &mut a as *mut f32;
        let d_1 = true;
        let d_2 = 0.0;
        let d_3 = false;
        let d = (d_0, d_1, d_2, d_3);
        let g = true;
        let _ = true;
        let i = &mut d.3 as *mut bool;
        *i = g;
        d.3
    };
    return e;
}

unsafe fn f(d: (*mut f32, bool, f64, bool), g: bool, _: bool) -> bool {
    let i = &mut d.3 as *mut bool;
    *i = g;
    d;
    return d.3;
}

fn main() {
    println!("{}", c());
}