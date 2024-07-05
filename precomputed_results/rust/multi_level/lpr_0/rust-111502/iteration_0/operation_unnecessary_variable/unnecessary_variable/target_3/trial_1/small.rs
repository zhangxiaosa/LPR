fn c() -> bool {
    let d = (core::ptr::addr_of_mut!(()).cast::<(f32, bool)>(), (0., false));
    let e = d.1 .1;
    return e;
}

fn main() {
    println!("{}", c());
}