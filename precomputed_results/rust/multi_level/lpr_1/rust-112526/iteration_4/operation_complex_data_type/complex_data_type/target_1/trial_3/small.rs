extern crate core;

use core::ptr;

unsafe fn a() -> *const *mut usize {
    let mut _46: u64 = 0;
    let mut _47: u32 = 0;
    let mut _88: usize = 0;
    let mut _31: *mut f32;
    let mut _33: *mut usize;
    let mut _177: *mut *mut usize = ptr::null_mut();
    let mut _44_0_2: u8 = 0;
    let mut _44_1: u32 = 0;
    let mut _44_2: f32 = 0.0;
    
    let mut tup_0_0_2: u8 = 0;
    let mut tup_0_1: u32 = 0;
    let mut tup_0_2: f32 = 0.0;
    let mut tup_1: bool = false;
    
    _31 = ptr::addr_of_mut!(_44_2);
    *_31 = 1.0;
    
    let mut isize_min: isize = isize::MIN;

    'bb65: loop {
        _31 = ptr::addr_of_mut!(tup_0_0_2);
        _31 = _31.wrapping_offset(isize::MIN);
        _46 = 42;
        _88 = 18215089233857363959_usize;
        _31 = _31.wrapping_offset(isize_min);
        
        loop {
            _44_0_2 = tup_0_0_2;
            _44_1 = tup_0_1;
            _44_2 = tup_0_2;
            
            _47 = *_31;
            
            match _88 {
                18215089233857363959 => {
                    _88 = 0;
                    _33 = ptr::addr_of_mut!(_177);
                    match _46 {
                        42 => {
                            *_33 = ptr::addr_of_mut!(_46);
                            println!("{_47}");
                            return ptr::addr_of!(_177);
                        }
                        _ => continue,
                    }
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