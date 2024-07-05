extern crate core;

use core::ptr;

unsafe fn a() -> *const *mut isize {
    let mut isize_min: isize;
    let mut _46: isize = 42;
    let mut _47: isize;
    let mut _88: usize = 18215089233857363959;
    let mut _31: *mut u8;
    let mut _33: *mut isize;
    let mut _90: *mut u8;
    let mut _44_0_0: u64 = Default::default();
    let mut _44_0_1: u64 = Default::default();
    let mut _44_0_2: u8 = Default::default();
    let _44_1: isize = Default::default();
    let _44_2: isize = Default::default();
    let mut _tup_0: ((u64, u64, u8), u32, f32, bool) = Default::default();
    let mut _95: ((u64, u64, u8), u32, f32, bool) = Default::default();

    _31 = &mut _44_0_2;
    *_31 = 1;
    isize_min = isize::MIN;

    'bb65_0: loop {
        let tup_ptr = &mut _tup_0;
        _31 = &mut (tup_ptr.0).2;
        _90 = _31.wrapping_offset(isize::MIN);
        _95.0 = (_44_0_0, _44_0_1, _44_0_2);
        _95.3 = (_44_1, _44_2);
        _31 = _90.wrapping_offset(isize_min);

        loop {
            let tup_ptr2 = &mut _tup_0;
            *tup_ptr2 = _95;
            isize_min = 0;
            _47 = *_31;

            match _88 {
                18215089233857363959 => {
                    _88 = 0;
                    _33 = &mut _46;

                    match _46 {
                        42 => {
                            println!("{_47}");
                            return &_33;
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