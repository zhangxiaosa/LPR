fn c() -> bool {
    let mut a = (0., true);
    let i = &mut a.1 as *mut bool;
    *i = true;
    ();
    *i
}

fn main() {
    println!("{}", c());
}