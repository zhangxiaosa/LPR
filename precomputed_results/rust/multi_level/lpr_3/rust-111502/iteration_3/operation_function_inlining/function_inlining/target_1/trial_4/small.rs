fn c() -> bool {
    let mut a = 0.0;
    let i = (&mut a, true, 0.0, false).3 as *mut bool;
    unsafe {
        *i = true;
        return true;
    }
}

fn main() {
    println!("{}", c());
}