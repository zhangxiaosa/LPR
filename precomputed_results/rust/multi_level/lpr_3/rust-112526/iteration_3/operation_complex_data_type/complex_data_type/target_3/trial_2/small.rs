extern crate core;

use core::ptr;

unsafe fn a() -> *const *mut i64 {
    let mut isize_min: isize;
    let mut _46: i32;
    let mut _47: u8;
    let mut _88: usize;
    let mut _31: *mut f32;
    let mut _33: *mut *mut i64;
    let mut _90: *mut f32;
    let mut _177 = ptr::null_mut();
    let mut _44_0_2: u8;
    let mut _44_1: u32;
    let mut _44_2: f32;
    let mut _tup_0_0_0_2: u8;
    let mut _tup_0_0_1: u32;
    let mut _tup_0_0_2: f32;
    let mut _tup_0_1: bool;
    let mut _95_0_0_0_2: u8;
    let mut _95_0_0_1: u32;
    let mut _95_0_0_2: f32;
    let mut _95_0_1: bool;
    _31 = ptr::addr_of_mut!(\_44_2);
    *_31 = 1.0;
    isize_min = isize::MIN;
    'bb65_0: loop {
        let tup_ptr = ptr::addr_of_mut!(\_tup_0);
        _31 = ptr::addr_of_mut!((*tup_ptr).0 .0 .2);
        _90 = _31.wrapping_offset(isize::MIN);
        _95_0_0_2 = _44_0_2;
        _95_0_0_1 = _44_1;
        _95_0_0_2 = _44_2;
        _95_0_1 = _tup_0_1;
        _46 = 42;
        _88 = 18215089233857363959_usize;
        _31 = _90.wrapping_offset(isize_min);
        loop {
            let tup_ptr2 = ptr::addr_of_mut!(\_tup_0);
            *tup_ptr2 = ((_95_0_0_0_2, _95_0_0_1, _95_0_0_2), _95_0_1);
            isize_min = 0;
            _47 = *_31;
            match _88 {
                18215089233857363959 => {
                    _88 = 0;
                    _33 = ptr::addr_of_mut!(\_177);
                    match _46 {
                        42 => {
                            *_33 = ptr::addr_of_mut!(\_46);
                            println!("{_47}");
                            return ptr::addr_of!(\_177);
                        }
                        _ => continue,
                    }
                }
                0 => continue,
                _ => continue 'bb65_0,
            }
        }
    }
}

fn main() {
    unsafe {
        a();
    }
}