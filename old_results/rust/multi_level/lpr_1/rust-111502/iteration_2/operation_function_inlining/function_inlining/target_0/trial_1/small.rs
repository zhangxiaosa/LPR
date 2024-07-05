fn c() -> bool {
    let d = (&mut 0.0, (0.0, false));
    let i = &mut d.1.1 as *mut bool;
    unsafe {
        *i = true;
    }
    let _ = d;
    *i
}

fn main() {
    println!("{}", c());
}