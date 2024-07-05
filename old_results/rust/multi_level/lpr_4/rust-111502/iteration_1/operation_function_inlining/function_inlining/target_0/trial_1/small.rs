fn main() {
    let mut a = (0., true);
    let e = unsafe {
        let _k = &mut a;
        let d = (core::ptr::addr_of_mut!(a), (1., false));
        let g = true;
        let i = core::ptr::addr_of!(d.1 .1) as *mut bool;
        *i = g;
        d.1 .1
    };
    println!("{}", e);
}