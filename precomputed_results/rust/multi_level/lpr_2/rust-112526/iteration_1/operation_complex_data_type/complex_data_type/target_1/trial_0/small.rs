extern crate core;
use core::ptr;

fn main() {
    let mut _16: usize = 18215089233857363959;
    let mut isize_min: isize = isize::MIN;
    let _177: *mut i64 = ptr::null_mut();
    let mut _44: (u64, u64, u8, u32, f32) = (0, 0, 0, 0, 0.0);
    let mut _90: *mut f32;
    let mut _46: i64 = 42;
    let mut _47: i64;
    let mut _31: *mut f32;

    // Decomposed variable tup
    let mut tup_0: (u64, u64, u8) = (0, 0, 0);
    let mut tup_1: u32 = 0;
    let mut tup_2: f32 = 0.0;
    let mut tup: ((u64, u64, u8), u32, f32) = (tup_0, tup_1, tup_2);

    _31 = &mut _44.4;
    *_31 = 1.0;

    _90 = _31.wrapping_offset(isize_min);

    loop {
        let tup_ptr2 = &mut tup;
        *tup_ptr2 = (_44, Default::default());

        isize_min = 0;
        _47 = *_31;

        match _16 {
            18215089233857363959 => {
                _16 = 0;
                _31 = &mut _46;

                match _46 {
                    42 => {
                        println!("{:?}", _47);
                        return _177;
                    }
                    _ => continue,
                }
            }
            0 => continue,
            _ => continue,
        }
    }
}