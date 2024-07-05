extern crate core;
use core::ptr;

unsafe fn a() -> *const *mut i64 {
    let mut result = ptr::null_mut();
    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
    let mut tup: (((u64, u64, u8), u32, f32), bool) = Default::default();
    let mut _95: (((u64, u64, u8), u32, f32), bool) = Default::default();
    _95.0 = _44;
    let _46 = 42;
    let _88 = 18215089233857363959_usize;
    loop {
        let tup_ptr2 = ptr::addr_of_mut!(tup);
        *tup_ptr2 = _95;
        let _47 = (*tup_ptr2).0 .0 .2;
        match _88 {
            18215089233857363959 => {
                let _33 = ptr::addr_of_mut!(result);
                match _46 {
                    42 => {
                        *_33 = ptr::addr_of_mut!(_46);
                        println!("{_47}");
                        return ptr::addr_of!(result);
                    }
                    _ => continue,
                }
            }
            0 => continue,
            _ => continue,
        }
    }
}

fn main() {
    unsafe {
        a();
    }
}