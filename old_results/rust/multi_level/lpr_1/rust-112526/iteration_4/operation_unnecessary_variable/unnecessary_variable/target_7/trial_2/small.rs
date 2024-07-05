extern crate core;
use core::ptr;

unsafe fn a() -> *const *mut usize {
    let mut _177 = ptr::null_mut();
    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
    let mut tup: (((u64, u64, u8), u32, f32), bool) = Default::default();
    *_31 = 1;
    let mut isize_min = isize::MIN;
    let mut _46 = 42;
    let mut _88 = 18215089233857363959_usize;
    while _88 != 0 {
        *ptr::addr_of_mut!(tup) = (_44, Default::default());
        isize_min = 0;
        match _88 {
            18215089233857363959 => {
                _88 = 0;
                let _33 = ptr::addr_of_mut!(_177);
                match _46 {
                    42 => {
                        *_33 = ptr::addr_of_mut!(_46);
                        println!("{}", *_31);
                        return ptr::addr_of!(_177);
                    }
                    _ => continue,
                }
            }
            _ => continue,
        }
    }
}

fn main() {
    unsafe {
        a();
    }
}