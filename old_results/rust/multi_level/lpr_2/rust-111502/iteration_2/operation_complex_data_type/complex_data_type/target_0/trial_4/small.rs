fn c() -> bool {
    unsafe { f(&mut (0., true), (&mut (0., true), (0.0, false)), true, true) }
}

unsafe fn f(k: *mut (f32, bool), d: (*mut (f32, bool), (f64, bool)), g: bool, _: bool) -> bool {
    let i = core::ptr::addr_of!((*d).1 .1) as *mut bool;
    *i = true;
    d;
    (*d).1 .1
}

fn main() {
    let d_0: *mut (f32, bool) = &mut (0., true);
    let d_1_0: f64 = 0.0;
    let d_1_1: bool = false;

    unsafe {
        f(&mut (0., true), (&mut (0., true), (d_1_0, d_1_1)), true, true);
    }

    println!("{}", c());
}