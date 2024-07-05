extern crate core;
use core::ptr;

fn main() {
    let mut isize_min;
    let mut _46;
    let mut _47;
    let mut _88 = 18215089233857363959_usize;
    let mut _31;
    let mut _33;
    let mut _90;
    let mut _177 = ptr::null_mut();
    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
    let mut _tup_0: (((u64, u64, u8), u32, f32), bool) = Default::default();
    let mut _95: (((u64, u64, u8), u32, f32), bool) = Default::default();

    _31 = &mut _44.0 .2;
    *_31 = 1;
    isize_min = isize::MIN;

    'bb65_0: loop {
        let tup_ptr = &mut _tup_0;
        _31 = &mut tup_ptr.0 .0 .2;
        _90 = (_31 as *mut i64 as isize).wrapping_offset(isize::MIN);
        _95.0 = _44;
        _46 = 42;
        _31 = _90.wrapping_offset(isize_min);

        loop {
            let tup_ptr2 = &mut _tup_0;
            *tup_ptr2 = _95;
            isize_min = 0;
            _47 = *_31;

            if _88 == 18215089233857363959 {
                _88 = 0;
                _33 = &mut _177;

                if _46 == 42 {
                    *_33 = &mut _46;
                    println!("{}", _47);
                    return;
                }
            } else if _88 == 0 {
                continue;
            } else {
                continue 'bb65_0;
            }
        }
    }
}