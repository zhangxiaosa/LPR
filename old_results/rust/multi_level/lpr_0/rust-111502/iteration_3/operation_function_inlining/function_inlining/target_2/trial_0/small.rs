fn c() -> bool {
    let mut a = 0.;
    let d = {
        let mut a_ptr = &mut a as *mut f32;
        let tuple = (0., false);
        let d = (a_ptr, tuple);
        let i = core::ptr::addr_of!(d.1 .1) as *mut bool;
        *i = true;
        d
    };
    let (_, (f1, f2)) = d;
    return f2;
}

fn main() {
    println!("{}", c());
}