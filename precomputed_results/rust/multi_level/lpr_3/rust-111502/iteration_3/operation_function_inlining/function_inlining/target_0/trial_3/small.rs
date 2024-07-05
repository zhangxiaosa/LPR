fn c() -> bool {
    let mut a = 0.0;
    let a_ptr = &mut a as *mut f32;
    let b = true;
    let i = &mut a_ptr as *mut *mut f32 as *mut bool;
    unsafe {
        *i = b;
        (&mut a, true, 0.0, false).3
    }
}

fn main() {
    println!("{}", c());
}