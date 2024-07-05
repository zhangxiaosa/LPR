extern crate core;

use core::ptr;

fn a() -> *const *mut i64 {
    let mut _16: i8;
    let mut isize_min: isize;
    let mut _46: i8;
    let _107: i32 = 0;
    let mut _47: i32;
    let mut _88: i8;
    let mut _31: *mut u8;
    let mut _33: *mut *mut i64;
    let mut _90: *mut u8;
    let mut _177: *mut i64 = ptr::null_mut();
    let mut _44_0_2: u8;
    let mut _44_1: u32;
    let mut _44_2: f32;
    let mut _44: (u8, u32, f32) = Default::default();
    let mut tup_0_0_2: u8;
    let mut tup_0_1: u32;
    let mut tup_0_2: f32;
    let mut tup_0: (u8, u32, f32) = Default::default();
    let mut tup_1: bool;
    let mut tup: ((u8, u32, f32), bool) = Default::default();
    let mut tup_2_0_0_2: u8;
    let mut tup_2_0_1: u32;
    let mut tup_2_0_2: f32;
    let mut tup_2_0: (u8, u32, f32) = Default::default();
    let mut tup_2_1: bool;
    let mut _95_0_0_2: u8;
    let mut _95_0_1: u32;
    let mut _95_0_2: f32;
    let mut _95_0: (u8, u32, f32) = Default::default();
    let mut _95_1: bool;
    let mut _95: ((u8, u32, f32), bool) = Default::default();

    _31 = ptr::addr_of_mut!(_44_0_2);
    *_31 = 1;
    isize_min = isize::MIN;

    loop {
        let tup_ptr = ptr::addr_of_mut!(tup);
        _31 = ptr::addr_of_mut!((*tup_ptr).0 .0 .2);
        _16 = 18215089233857363959_usize as i8;
        _90 = _31.wrapping_offset(isize_min);
        _95.0 = _44;
        _46 = 42;
        _88 = _16;
        _31 = _90.wrapping_offset(isize_min);

        loop {
            let tup_ptr2 = ptr::addr_of_mut!(tup);
            *tup_ptr2 = _95;
            isize_min = _107;
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
                _ => continue,
            }
        }
    }
}

fn main() {
    unsafe {
        a();
    }
}