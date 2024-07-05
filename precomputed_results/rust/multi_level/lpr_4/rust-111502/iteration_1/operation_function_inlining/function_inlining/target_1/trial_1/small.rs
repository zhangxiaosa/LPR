fn c() -> bool {
    let mut a = (0., true);
    let e = {
        let d = (&mut a, (1., false));
        let i = core::ptr::addr_of!(d.1 .1) as *mut bool;
        *i = true;
        d;
        d.1 .1
    };
    return e;
}

fn main() {
    println!("{}", c());
}