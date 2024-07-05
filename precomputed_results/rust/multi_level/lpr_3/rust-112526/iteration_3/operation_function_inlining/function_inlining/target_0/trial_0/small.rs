extern crate core;
unsafe fn a() -> *const *mut i64 {
    let mut isize_min;
    let mut _177 = core::ptr::null_mut();
    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
    let mut _tup_0: (((u64, u64, u8), u32, f32), bool) = Default::default();
    let mut _95: (((u64, u64, u8), u32, f32), bool) = Default::default();
    let _31 = core::ptr::addr_of_mut!(_44.0 .2);
    *_31 = 1;
    isize_min = isize::MIN;
    'bb65_0: loop {
        let tup_ptr = core::ptr::addr_of_mut!(_tup_0);
        let _31 = core::ptr::addr_of!((*tup_ptr).0 .0 .2);
        let _90 = _31.wrapping_offset(isize::MIN);
        _95.0 = _44;
        let _46 = 42;
        let _88 = 18215089233857363959_usize;
        let _31 = _90.wrapping_offset(isize_min);
        loop {
            let tup_ptr2 = core::ptr::addr_of_mut!(_tup_0);
            *tup_ptr2 = _95;
            isize_min = 0;
            let _47 = *_31;
            if _88 == 18215089233857363959 {
                _88 = 0;
                let _33 = core::ptr::addr_of_mut!(_177);
                *_33 = core::ptr::addr_of_mut!(_46);
                println!("{}", _47);
                return core::ptr::addr_of!(_46);
            }
            if _88 == 0 {
                continue;
            }
            continue 'bb65_0;
        }
    }
}

fn main() {
    unsafe {
        a();
    }
}