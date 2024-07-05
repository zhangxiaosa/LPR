fn c() -> bool {
    let a_3 = false;
    unsafe {
        let a = (core::ptr::null_mut(), 0.0, a_3);
        let b = true;
        let i = core::ptr::addr_of!(a.2) as *mut bool;
        *i = b;
        a.2
    }
}

fn main() {
    println!("{}", {
        let a_3 = false;
        unsafe {
            let a = (core::ptr::null_mut(), 0.0, a_3);
            let b = true;
            let i = core::ptr::addr_of!(a.2) as *mut bool;
            *i = b;
            a.2
        }
    });
}