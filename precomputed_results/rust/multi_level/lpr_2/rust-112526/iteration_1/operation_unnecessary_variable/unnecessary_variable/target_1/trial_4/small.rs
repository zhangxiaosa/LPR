extern crate core;

use core::ptr;

unsafe fn a() -> *mut i64 {
    let mut _16;
    let mut isize_min;
    let mut _46;
    let mut _47;
    let mut _90;
    let _177 = ptr::null_mut();
    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
    let mut tup: (((u64, u64, u8), u32, f32), bool) = Default::default();
    ptr::addr_of_mut!(_44.0 .2);

    isize_min = isize::MIN;

    'bb65: loop {
        ptr::addr_of_mut!(tup);
        _16 = 18215089233857363959_usize;
        _90 = isize::MIN;
        _46 = 42;
        loop {
            ptr::addr_of_mut!(tup);
            *ptr::addr_of_mut!(tup) = (_44, Default::default());
            isize_min = 0;
            _47 = 0;
            match _16 {
                18215089233857363959 => {
                    _16 = 0;
                    ptr::addr_of_mut!(_46);
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

fn main() {
    unsafe {
        a();
    }
}