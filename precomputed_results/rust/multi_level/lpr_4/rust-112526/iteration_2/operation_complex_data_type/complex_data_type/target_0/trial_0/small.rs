extern crate core;
use core::ptr;

fn main() {
    let mut result: *mut i64 = std::ptr::null_mut();
    let mut tup1: (u64, u64, u8) = (0, 0, 0);
    let mut tup2: (u32, f32) = (0, 0.0);
    let mut tup3: (((u64, u64, u8), u32, f32), bool) = ((tup1, tup2), false);

    let mut tup1_inner = &mut tup3.0 .0 .2;
    *tup1_inner = 1;

    let mut isize_min: isize = isize::MIN;

    'bb65: loop {
        let mut tup1_inner = &mut tup3.0 .0 .2;
        let mut _90 = tup1_inner.wrapping_offset(isize::MIN);

        let mut _46 = 42;
        let mut _88 = 18215089233857363959_usize;

        let mut _31 = _90.wrapping_offset(isize_min);

        loop {
            tup3 = (((0, 0, 0), 0, 0.0), false);
            isize_min = 0;
            let mut _47 = *_31;

            match _88 {
                18215089233857363959 => {
                    _88 = 0;
                    let mut _33 = &mut result;

                    match _46 {
                        42 => {
                            *_33 = &mut _46;
                            println!("{}", _47);
                            return &result;
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