fn c() -> bool {
    let mut a = (0., true);
    let b = (0., false);
    let d = (core::ptr::addr_of_mut!(a), b);
    let e = {
        let k = (0., true);
        let d = (core::ptr::addr_of_mut!(a), b);
        let g = true;
        let h = true;

        let i = core::ptr::addr_of!(d.1 .1) as *mut bool;
        let j = g;
        *i = j;
        d;
        d.1 .1
    };
    return e;
}

fn main() {
    println!("{}", c());
}