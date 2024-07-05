fn c() -> bool {
    let d = (&mut 0.0, (0.0, false));
    let i = core::ptr::addr_of!(d.1) as *mut bool;
    *i = true;
    *i
}

fn main() {
    println!("{}", c());
}