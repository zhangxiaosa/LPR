fn c() -> bool {
    let mut a = 0.0;
    let a_ptr = &mut a as *mut f32;
    let b = true;

    let i = a_ptr.offset(3) as *mut bool;
    *i = b;

    a.offset(3).read()
}

fn main() {
    println!("{}", c());
}