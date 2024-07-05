fn c() -> bool {
    let d = (core::ptr::null_mut(), (1.0, false));
    unsafe {
        *(&mut d.1 .1) = true;
    }
    d.1 .1
}

fn main() {
    println!("{}", c());
}