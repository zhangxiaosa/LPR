extern crate core;
use core::ptr;

fn main() {
    unsafe {
        a();
    }
}

unsafe fn a() -> *mut i64 {
    let mut _16: usize;
    let mut isize_min: isize;
    let mut _46: i32;
    let mut _47: i32;
    let mut _31: *mut f32;
    let mut _90: *mut f32;
    let _177: *mut i64 = ptr::null_mut();
    let mut _44_0_2: u8 = 0;
    let mut _44_1: u32 = 0;
    let mut _44_2: f32 = 0.0;
    let mut _44: ((u64, u64, u8), u32, f32) = (((0, 0, _44_0_2), _44_1, _44_2), 0);
    let mut _44_0: u64 = 0;
    let mut _44_1: u64 = 0;
    let mut _44_2: u8 = 0;
    let mut tup_0_0_0_2: *mut u8 = &mut _44_2;
    let mut tup_0_0_1: *mut u64 = &mut _44_1;
    let mut tup_0_0: *mut u64 = &mut _44_0;
    let mut tup_0: *mut ((u64, u64, u8), u32, f32) = &mut _44;
    let mut tup: *mut (((u64, u64, u8), u32, f32), bool) = &mut ((_44_0, _44_1, _44_2), 0);

    _31 = ptr::addr_of_mut!((*tup).0 .0 .2);
    *_31 = 1.0;
    isize_min = isize::MIN;

    'bb65: loop {
        let tup_ptr: *mut (((u64, u64, u8), u32, f32), bool) = tup;
        _31 = ptr::addr_of_mut!((*tup_ptr).0 .0 .2);
        _16 = 18215089233857363959_usize;
        _90 = _31.wrapping_offset(isize_min);
        _46 = 42;
        _31 = _90.wrapping_offset(isize_min);

        loop {
            let tup_ptr2: *mut (((u64, u64, u8), u32, f32), bool) = tup;
            *tup_ptr2 = (_44, 0);
            isize_min = 0;
            _47 = *_31;

            match _16 {
                18215089233857363959 => {
                    _16 = 0;
                    _31 = ptr::addr_of_mut!(_46);
                    match _46 {
                        42 => {
                            println!("{_47}");
                            return _177;
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