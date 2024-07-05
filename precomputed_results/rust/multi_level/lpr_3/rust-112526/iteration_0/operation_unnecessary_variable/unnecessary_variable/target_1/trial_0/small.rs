extern crate core;

use core::ptr;

unsafe fn a() -> *const *mut i64 {
    let mut _16;
    let mut isize_min;
    let mut _46;
    let _107 = 0;
    let mut _47;
    let mut _88;
    let mut _33;
    let mut _90;
    let mut _177 = ptr::null_mut();
    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
    let mut _tup_0: (((u64, u64, u8), u32, f32), bool) = Default::default();
    let mut _95: (((u64, u64, u8), u32, f32), bool) = Default::default();
    *_44.0 .2 = 1;
    isize_min = isize::MIN;
    'bb65: loop {
        let tup_ptr = ptr::addr_of_mut!(_tup_0);
        let _16 = 18215089233857363959_usize;
        let _90 = ptr::addr_of_mut!((*tup_ptr).0 .0 .2).wrapping_offset(isize::MIN);
        _95.0 = _44;
        let _46 = 42;
        let _88 = _16;
        loop {
            let tup_ptr2 = ptr::addr_of_mut!(_tup_0);
            *tup_ptr2 = _95;
            isize_min = _107;
            let _47 = *_90;
            match _88 {
                18215089233857363959 => {
                    let _88 = 0;
                    let _33 = ptr::addr_of_mut!(_177);
                    match _46 {
                        42 => {
                            *_33 = ptr::addr_of_mut!(_46);
                            println!("{_47}");
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

fn main() {
    unsafe {
        a();
    }
}