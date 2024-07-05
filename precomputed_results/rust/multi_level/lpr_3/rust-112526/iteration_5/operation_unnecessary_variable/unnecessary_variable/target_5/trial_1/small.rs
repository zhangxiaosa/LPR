extern crate core;

use core::ptr;

unsafe fn a() -> *const *mut isize {
    let mut _46 = 42;
    let mut _47;
    let mut _88 = 0;
    let mut _31;
    let mut _33;
    let _44_0_0 = Default::default();
    let _44_0_1 = Default::default();
    let mut _44_0_2 = Default::default();
    let _44_1 = Default::default();
    let _44_2 = Default::default();
    let mut _tup_0: ((u64, u64, u8), u32, f32) = (_44_0_0, _44_0_1, _44_0_2);
    _31 = ptr::addr_of_mut!(_44_0_2);
    *_31 = 1;
    'bb65_0: loop {
        let tup_ptr = ptr::addr_of_mut!(_tup_0);
        _31 = ptr::addr_of_mut!((*tup_ptr).0 .0 .2);
        _47 = *_31;
        loop {
            let tup_ptr2 = ptr::addr_of_mut!(_tup_0);
            *tup_ptr2 = (_44_0_0, _44_0_1, _44_0_2);
            _47 = *_31;
            match _88 {
                18215089233857363959 => {
                    _33 = _46;
                    match _46 {
                        42 => {
                            println!("{_47}");
                            return _33;
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