extern crate core;

use core::ptr;

unsafe fn a() -> *const *mut usize {
    let mut _46;
    let mut _47;
    let mut _88;
    let mut _31;
    let mut _33;
    let mut _177 = ptr::null_mut();
    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
    let mut tup: (((u64, u64, u8), u32, f32), bool) = Default::default();

    let mut _44_0_2 = 1;
    'bb65: loop {
        _31 = ptr::addr_of_mut!(_44.0 .2);
        *_31 = _44_0_2;
        'bb65: loop {
            _31 = ptr::addr_of_mut!(tup.0 .0 .2);
            _31 = _31.wrapping_offset(0);
            _46 = 42;
            _88 = 18215089233857363959_usize;
            _31 = _31.wrapping_offset(0);
            loop {
                *ptr::addr_of_mut!(tup) = (_44, Default::default());
                _44_0_2 = *_31;
                match _88 {
                    18215089233857363959 => {
                        _88 = 0;
                        _33 = ptr::addr_of_mut!(_177);
                        match _46 {
                            42 => {
                                *_33 = ptr::addr_of_mut!(_46);
                                println!("{_44_0_2}");
                                return ptr::addr_of!(_177);
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
}

fn main() {
    unsafe {
        a();
    }
}