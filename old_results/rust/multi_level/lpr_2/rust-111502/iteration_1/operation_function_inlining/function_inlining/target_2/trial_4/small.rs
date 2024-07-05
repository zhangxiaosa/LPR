fn c() -> bool {
    let mut a = (0., true);
    let b = (0., false);

    let i = &mut a.1 as *mut bool;
    *i = true;
    b;
    return a.1;
}

fn main() {
    println!("{}", c());
}