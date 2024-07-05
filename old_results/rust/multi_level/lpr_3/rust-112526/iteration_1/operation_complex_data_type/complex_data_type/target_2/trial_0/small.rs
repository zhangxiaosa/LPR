extern crate core;

use core::ptr;

fn main() {
    unsafe {
        a();
    }
}

fn a() -> *const *mut i64 {
    let mut _16: usize;
    let mut isize_min: isize;
    let mut _46: i32;
    let _107: i32 = 0;
    let mut _47: isize;
    let mut _88: usize;
    let mut _31: *mut u8;
    let mut _33: *mut *mut i64;
    let mut _90: *mut u8;
    let mut _177: *mut i64 = ptr::null_mut();
    let mut _44_0_2: u8;
    let x0: (u64, u64, u8);
    let x1: u32;
    let x2: f32;
    let _44: (x0, x1, x2);
    let tup0_x0_x2: u8;
    let tup0_x1: u32;
    let tup0_x2: f32;
    let tup0_x3: bool;
    let _tup_0: (tup0_x0_x2, tup0_x1, tup0_x2, tup0_x3);
    let tup1_x0_x0_x2: u8;
    let tup1_x0_x1: u32;
    let tup1_x0_x2: f32;
    let tup1_x1: bool;
    let _95: (tup1_x0_x0_x2, tup1_x0_x1, tup1_x0_x2, tup1_x1);

    _16 = 18215089233857363959;
    isize_min = isize::MIN;
    _46 = 42;

    let _44_0 = (0_u64, 0_u64, 0_u8);
    let _44_1 = 0_u32;
    let _44_2 = 0_f32;
    _44 = (_44_0, _44_1, _44_2);

    let tup0_x0 = (0_u64, 0_u64, 0_u8);
    let tup0_x1 = 0_u32;
    let tup0_x2 = 0_f32;
    let tup0_x3 = false;
    _tup_0 = (tup0_x0, tup0_x1, tup0_x2, tup0_x3);

    let tup1_x0_x0_x0 = 0_u64;
    let tup1_x0_x0_x1 = 0_u64;
    let tup1_x0_x0_x2 = 0_u8;
    let tup1_x0_x1 = 0_u32;
    let tup1_x0_x2 = 0_f32;
    let tup1_x1 = false;
    _95 = ((tup1_x0_x0_x0, tup1_x0_x0_x1, tup1_x0_x0_x2), tup1_x0_x1, tup1_x0_x2, tup1_x1);

    let x0_ptr = ptr::addr_of_mut!(_44.0);
    _44_0_2 = 1;
    (*x0_ptr).2 = _44_0_2;

    let tup_ptr = ptr::addr_of_mut!(_tup_0);
    let tup0_x0_x2_ptr = ptr::addr_of_mut!((*tup_ptr).0.0.2);
    _90 = _31.wrapping_offset(isize::MIN);
    (*tup0_x0_x2_ptr) = 1;

    loop {
        let tup_ptr2 = ptr::addr_of_mut!(_tup_0);
        *tup_ptr2 = _95;
        isize_min = _107;
        _47 = *_31;

        match _88 {
            18215089233857363959 => {
                _88 = 0;
                let _33_ptr = ptr::addr_of_mut!(_177);

                match _46 {
                    42 => {
                        *_33_ptr = ptr::addr_of_mut!(_46);
                        println!("{_47}");
                        return ptr::addr_of!(_177);
                    }
                    _ => continue
                }
            }
            0 => continue,
            _ => continue 'bb65_0
        }
    }
}