fn c() -> bool {
    let mut a = (0., true);
    let b = (0., false);
    let d = (core::ptr::addr_of_mut!(a), b);
    let e = {
        let i = core::ptr::addr_of!(d.1 .1) as *mut bool;
        let j = true;
        *i = j;
        b
    };    
    return e.1;
}

fn main() {
    println!("{}", c());
}