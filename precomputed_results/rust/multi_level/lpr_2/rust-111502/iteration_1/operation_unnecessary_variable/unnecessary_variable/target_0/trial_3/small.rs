fn c() -> bool {
    let b_0 = 0.;
    let b_1 = false;
    unsafe { f((&mut (0., true), (b_0, b_1)), true, true) }
}

unsafe fn f(d: (*mut (f32, bool), (f64, bool)), g: bool, _h: bool) -> bool {
    let i = core::ptr::addr_of!(d.1 .1) as *mut bool;
    *i = g;
    d.1 .1
}

fn main() {
    println!("{}", c());
}