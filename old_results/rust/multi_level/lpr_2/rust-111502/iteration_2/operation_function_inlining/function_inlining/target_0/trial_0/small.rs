fn c() -> bool {
    let k = &mut (0., true);
    let d = (&mut (0., true), (0.0, false));
    let i = core::ptr::addr_of!(d.1 .1) as *mut bool;
    *i = true;
    d.1
}

fn main() {
    println!("{}", c());
}