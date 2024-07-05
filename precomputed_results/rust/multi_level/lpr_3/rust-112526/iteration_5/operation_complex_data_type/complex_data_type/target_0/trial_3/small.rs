extern crate core;

use core::ptr;

fn a() -> *const *mut isize {
    let mut isize_min: isize;
    let mut _46: i32 = 42;
    let mut _47: i32;
    let mut _88: usize = 18215089233857363959;
    let mut _31: *mut i8;
    let mut _33: *mut i8;
    let mut _90: *mut i8;
    let mut _44_0_0: u64 = 0;
    let mut _44_0_1: u64 = 0;
    let mut _44_0_2: u8 = 0;
    let _44_1 = ();
    let _44_2 = ();
    let mut _tup_0_0_0_0_0: u64 = 0;
    let mut _tup_0_0_0_0_1: u64 = 0;
    let mut _tup_0_0_0_0_2: u8 = 0;
    let mut _tup_0_0_0_1: u32 = 0;
    let mut _tup_0_0_1: f32 = 0.0;
    let mut _tup_0_1: bool = false;
    let mut _95_0_0_0_0: u64 = 0;
    let mut _95_0_0_0_1: u64 = 0;
    let mut _95_0_0_0_2: u8 = 0;
    let mut _95_0_0_1: u32 = 0;
    let mut _95_0_1: f32 = 0.0;
    let mut _95_1: bool = false;

    _31 = ptr::addr_of_mut!(_44_0_2);
    *_31 = 1;

    isize_min = isize::MIN;

    'bb65_0: loop {
        let tup_ptr = ptr::addr_of_mut!(_tup_0_0_0_0);
        _31 = ptr::addr_of_mut!((*tup_ptr).0_0_0_2);
        _90 = _31.wrapping_offset(isize::MIN);

        _95_0_0_0_0 = _44_0_0;
        _95_0_0_0_1 = _44_0_1;
        _95_0_0_0_2 = _44_0_2;

        _31 = _90.wrapping_offset(isize_min);

        loop {
            let tup_ptr2 = ptr::addr_of_mut!(_tup_0_0_0_0);
            *tup_ptr2 = (_95_0_0_0_0, _95_0_0_0_1, _95_0_0_0_2, _95_0_0_1, _95_0_1, _95_1);

            isize_min = 0;

            _47 = *_31;

            match _88 {
                18215089233857363959 => {
                    _88 = 0;
                    _33 = ptr::addr_of_mut!(_46);

                    match _46 {
                        42 => {
                            println!("{_47}");
                            return ptr::addr_of!(_33);
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