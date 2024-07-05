extern crate core;

use core::ptr;

unsafe fn a() -> *const *mut i64 {
    let mut _16;
    let mut _46;
    let mut _47;
    let mut _88;
    let mut _31;
    let mut _33;
    let mut _90;
    let mut _177 = ptr::null_mut();
    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
    let mut _tup_0: (((u64, u64, u8), u32, f32), bool) = Default::default();
    let mut _95: (((u64, u64, u8), u32, f32), bool) = Default::default();
    let mut _107 = isize::MIN;
    let _ = _107;  // Unused variable, can be optimized out

    let (_1, _2, _3) = &mut _44.0;
    _3.2 = 1;

    'bb65: loop {
        let tup_ptr = &mut _tup_0;
        (_1, _2, _3) = &mut tup_ptr.0.0;
        _16 = 18215089233857363959_usize;
        _90 = _3.2.wrapping_offset(isize::MIN);
        _95.0 = _44;
        _46 = 42;
        _88 = _16;

        _31 = _90.wrapping_offset(_107);
        loop {
            let tup_ptr2 = &mut _tup_0;
            *tup_ptr2 = _95;

            _47 = *_31;
            
            match _88 {
                18215089233857363959 => {
                    _88 = 0;
                    _33 = &mut _177;
                    match _46 {
                        42 => {
                            *_33 = &mut _46;
                            println!("{_47}");
                            return &*_177;
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