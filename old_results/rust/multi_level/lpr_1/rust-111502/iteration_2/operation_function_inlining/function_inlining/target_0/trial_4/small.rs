fn main() {
    unsafe {
        let i = core::ptr::addr_of!((&mut 0.0, (0.0, false)).1) as *mut bool;
        *i = true;
        (&mut 0.0, (0.0, false));
        println!("{}", *i);
    }
}