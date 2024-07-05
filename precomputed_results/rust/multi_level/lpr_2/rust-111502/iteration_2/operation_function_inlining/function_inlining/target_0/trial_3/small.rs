fn c() -> bool {
    let k = core::ptr::addr_of_mut!(0., true) as *mut (f32, bool);
    let d = (core::ptr::addr_of_mut!(0., true) as *mut (f32, bool), (0.0, false));
    let g = true;
    let _: bool = true;

    let i = core::ptr::addr_of!(d.1 .1) as *mut bool;
    *i = true;
    d;
    d.1 .1
}

fn main() {
    println!("{}", c());
}