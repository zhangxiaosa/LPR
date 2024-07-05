extern crate core;
use core::ptr;

unsafe fn a() -> *const *mut usize {
    let mut _88;
    let mut _177 = ptr::null_mut();
    let mut tup: (((u64, u64, u8), u32, f32), bool) = Default::default();
    let mut isize_min = isize::MIN;
    'bb65: loop {
        _88 = 18215089233857363959_usize;
        loop {
            *ptr::addr_of_mut!(tup) = (Default::default(), Default::default());
            isize_min = 0;
            match _88 {
                18215089233857363959 => {
                    _88 = 0;
                    let _33 = ptr::addr_of_mut!(_177);
                    *_33 = ptr::addr_of_mut!(_33);
                    println!("{_47}");
                    return ptr::addr_of!(_177);
                }
                0 => continue,
                _ => continue 'bb65,
            }
        }
    }
}

fn main() {
    unsafe {
        a();
    }
}