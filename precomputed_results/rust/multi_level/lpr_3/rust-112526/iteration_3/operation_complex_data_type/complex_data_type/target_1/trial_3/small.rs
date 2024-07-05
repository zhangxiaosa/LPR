extern crate core;

use core::ptr;

fn main() {
    unsafe {
        a();
    }
}

unsafe fn a() -> *const *mut i64 {
    let mut isize_min: isize;
    let mut _46: i32;
    let mut _47: i64;
    let mut _88: usize;
    let mut _31: *mut i32;
    let mut _33: *mut *mut i32;
    let mut _90: *mut i32;
    let mut _177: *mut *mut i64 = ptr::null_mut();
    let mut _44_0_2: f32;
    let mut _44_0: (u64, u64, u8);
    let mut _44: (((u64, u64, u8), u32, f32), bool);
    let mut _tup_0_0_2: f32;
    let mut _tup_0_0: (u64, u64, u8);
    let mut _tup_0: (((u64, u64, u8), u32, f32), bool);
    let mut _95_0_2: f32;
    let mut _95_0: (u64, u64, u8);
    let mut _95: (((u64, u64, u8), u32, f32), bool);

    _44_0_2 = 0.0;
    _44_0 = (0, 0, 0);
    _44 = ((_44_0, 0, _44_0_2), false);

    _tup_0_0_2 = 0.0;
    _tup_0_0 = (0, 0, 0);
    _tup_0 = ((_tup_0_0, 0, _tup_0_0_2), false);

    _95_0_2 = 0.0;
    _95_0 = (0, 0, 0);
    _95 = ((_95_0, 0, _95_0_2), false);

    _31 = ptr::addr_of_mut!(_44.0).cast();
    *_31 = 1;
    isize_min = isize::MIN;

    'bb65_0: loop {
        let tup_ptr = ptr::addr_of_mut!(_tup_0).cast();
        _31 = ptr::addr_of_mut!((*tup_ptr).0.0.2).cast();
        _90 = _31.wrapping_offset(isize::MIN);
        _95.0 = _44;
        _46 = 42;
        _88 = 18215089233857363959_usize;
        _31 = _90.wrapping_offset(isize_min);

        loop {
            let tup_ptr2 = ptr::addr_of_mut!(_tup_0).cast();
            *tup_ptr2 = _95;
            isize_min = 0;
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
                _ => continue 'bb65_0,
            }
        }
    }
}
