fn c() -> bool {
    let mut a_0: f32 = 0.0;
    let mut b_1: bool = true;
    let mut b_2: bool = false;
    unsafe { f(&mut a_0 as *mut f32, b_1, b_2, true, true) }
}

unsafe fn f(a_0: *mut f32, a_1: bool, a_3: bool, b: bool, _: bool) -> bool {
    let i = &mut a_3;
    *i = b;
    a_1;
    a_3
}

fn main() {
    println!("{}", c());
}