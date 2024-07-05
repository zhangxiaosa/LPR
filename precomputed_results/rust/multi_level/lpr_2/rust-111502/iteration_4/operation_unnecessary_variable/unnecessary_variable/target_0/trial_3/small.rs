fn c() -> bool {
    unsafe { f(true) }
}

unsafe fn f(i_bool: bool) -> bool {
    i_bool
}

fn main() {
    println!("{}", c());
}