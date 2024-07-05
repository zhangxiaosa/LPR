fn main() {
    let mut a = (0., true);
    let b = (0., false);
    unsafe {
        let i = core::ptr::addr_of!(b.1.1) as *mut bool;
        *i = true;
        let d = (&mut a, b);
        let g = true;
        let h = true;
        let result = d.1.1;
        println!("{}", result);
    }
}