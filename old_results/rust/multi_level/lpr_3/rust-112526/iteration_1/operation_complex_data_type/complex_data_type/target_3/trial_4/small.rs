extern crate core;

use core::ptr;

fn a() -> (usize, isize, usize, i32, u8, usize, *mut u8, *mut *mut i64, *mut u8, *mut i64) {
    let mut _16: usize;
    let mut isize_min: isize;
    let mut _46: usize;
    let _107: i32 = 0;
    let mut _47: u8;
    let mut _88: usize;
    let mut _31: *mut u8;
    let mut _33: *mut *mut i64;
    let mut _90: *mut u8;
    let mut _177: *mut i64 = ptr::null_mut();
    let mut _44: ((u64, u64, u8), u32, f32);
    let mut _tup_0: (((u64, u64, u8), u32, f32), bool);
    let mut _95: (((u64, u64, u8), u32, f32), bool);
    _31 = &mut _44.0.2;
    *_31 = 1;
    isize_min = isize::MIN;
    'bb65_0: loop {
        let tup_ptr = &mut _tup_0;
        _31 = &mut ((*tup_ptr).0).0.2;
        _16 = 18215089233857363959_usize;
        _90 = _31.wrapping_offset(isize::MIN);
        _95.0 = _44;
        _46 = 42;
        _88 = _16;
        _31 = _90.wrapping_offset(isize_min);
        loop {
            let tup_ptr2 = &mut _tup_0;
            *tup_ptr2 = _95;
            isize_min = _107;
            _47 = *_31;
            match _88 {
                18215089233857363959 => {
                    _88 = 0;
                    _33 = &mut _177;
                    match _46 {
                        42 => {
                            *_33 = &mut _46;
                            println!("{_47}");
                            return (_16, isize_min, _46, _107, _47, _88, _31, _33, _90, _177);
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
    let (_16, isize_min, _46, _107, _47, _88, _31, _33, _90, _177) = a();
}
