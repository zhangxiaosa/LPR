extern crate core;

use core::ptr;

unsafe fn a() -> *const *mut i64 {
    let mut isize_min;
    let mut _46;
    let mut _47;
    let mut _88 = 0;
    let mut _31;
    let mut _33;
    let mut _90;
    let mut _177 = ptr::null_mut();
    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
    let mut _tup_0: (((u64, u64, u8), u32, f32), bool) = Default::default();
    _31 = ptr::addr_of_mut!(_44.0 .2);
    *_31 = 1;
    isize_min = isize::MIN;

    'bb65_0: loop {
        let tup_ptr = ptr::addr_of_mut!(_tup_0);
        _31 = ptr::addr_of_mut!((*tup_ptr).0 .0 .2);
        _90 = _31.wrapping_offset(isize::MIN);

        _46 = 0;

        _31 = _90.wrapping_offset(isize_min);

        loop {
            let tup_ptr2 = ptr::addr_of_mut!(_tup_0);
            *tup_ptr2 = (((u64, u64, u8), u32, f32), false);
            isize_min = 0;
            _47 = 1;

            match _88 {
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
