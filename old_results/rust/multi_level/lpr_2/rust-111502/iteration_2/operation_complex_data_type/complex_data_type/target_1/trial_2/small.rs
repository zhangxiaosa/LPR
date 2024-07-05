fn c() -> bool {
    let mut value1 = (0., true);
    let mut value2 = (0., true);
    let mut value3 = (0.0, false);
    let mut value4 = true;

    unsafe {
        f(&mut value1, (&mut value2, value3), value4, true)
    }
}

unsafe fn f(k: *mut (f32, bool), d: (*mut (f32, bool), (f64, bool)), g: bool, _: bool) -> bool {
    let i = &mut *d.1 .1;
    *i = true;
    *d.1 .1
}

fn main() {
    println!("{}", c());
}