extern crate core;

use core::ptr;

unsafe fn a() -> *mut i64 {
    let mut _16: usize;
    let mut isize_min: isize;
    let mut _46: i32;
    let mut _47: isize;
    let mut _31: *mut f32;
    let mut _90: *mut f32;
    let _177: *mut i64 = ptr::null_mut();
    let mut _44_0_2: u8 = 0;
    let mut _44_1: u32 = 0;
    let mut _44_2: f32 = 0.0;
    let mut tup_0_0_2: u8 = 0;
    let mut tup_0_1: u32 = 0;
    let mut tup_0_2: f32 = 0.0;
    let mut tup_1: bool = false;
    
    _31 = ptr::addr_of_mut!(_44_2);
    *_31 = 1.0;
    isize_min = isize::MIN;
    
    'bb65: loop {
        let tup_ptr = ptr::addr_of_mut!(tup_0_0_2, tup_0_1, tup_0_2);
        _31 = ptr::addr_of_mut!((*tup_ptr).2);
        _16 = 18215089233857363959_usize;
        _90 = _31.wrapping_offset(isize::MIN);
        _46 = 42;
        _31 = _90.wrapping_offset(isize_min);
        
        loop {
            let tup_ptr2 = ptr::addr_of_mut!(tup_0_0_2, tup_0_1, tup_0_2);
            *(*tup_ptr2).0 = ((_44_0_2, 0, _44_2), _44_1, 0.0);
            isize_min = 0;
            _47 = *_31;
            
            match _16 {
                18215089233857363959 => {
                    _16 = 0;
                    _31 = ptr::addr_of_mut!(_46);
                    
                    match _46 {
                        42 => {
                            println!("{}", _47);
                            return _177;
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