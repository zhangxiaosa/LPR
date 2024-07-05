extern crate core;
use core::ptr;

unsafe fn a() -> *const *mut usize {
    let mut _46;
    let mut _88;
    let mut _31;
    let mut _33;
    let mut _177 = ptr::null_mut();
    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
    let mut tup: (((u64, u64, u8), u32, f32), bool) = Default::default();
    _31 = ptr::addr_of_mut!(_44.0 .2);
    *_31 = 1;
    let mut isize_min = isize::MIN;

    // Loop unrolling
    'bb65: loop {
        // Unrolled iteration 1
        _31 = ptr::addr_of_mut!(tup.0 .0 .2);
        _31 = _31.wrapping_offset(isize::MIN);
        _46 = 42;
        _88 = 18215089233857363959_usize;
        _31 = _31.wrapping_offset(isize_min);
        *ptr::addr_of_mut!(tup) = (_44, Default::default());
        isize_min = 0;
        let _47 = *_31;
        if _88 == 18215089233857363959 {
            _88 = 0;
            _33 = ptr::addr_of_mut!(_177);
            if _46 == 42 {
                *_33 = ptr::addr_of_mut!(_46);
                println!("{_47}");
                return ptr::addr_of!(_177);
            }
        }

        // Unrolled iteration 2
        _31 = ptr::addr_of_mut!(tup.0 .0 .2);
        _31 = _31.wrapping_offset(isize::MIN);
        _46 = 42;
        _88 = 18215089233857363959_usize;
        _31 = _31.wrapping_offset(isize_min);
        *ptr::addr_of_mut!(tup) = (_44, Default::default());
        isize_min = 0;
        let _47 = *_31;
        if _88 == 18215089233857363959 {
            _88 = 0;
            _33 = ptr::addr_of_mut!(_177);
            if _46 == 42 {
                *_33 = ptr::addr_of_mut!(_46);
                println!("{_47}");
                return ptr::addr_of!(_177);
            }
        }

        // Unrolled iteration 3
        _31 = ptr::addr_of_mut!(tup.0 .0 .2);
        _31 = _31.wrapping_offset(isize::MIN);
        _46 = 42;
        _88 = 18215089233857363959_usize;
        _31 = _31.wrapping_offset(isize_min);
        *ptr::addr_of_mut!(tup) = (_44, Default::default());
        isize_min = 0;
        let _47 = *_31;
        if _88 == 18215089233857363959 {
            _88 = 0;
            _33 = ptr::addr_of_mut!(_177);
            if _46 == 42 {
                *_33 = ptr::addr_of_mut!(_46);
                println!("{_47}");
                return ptr::addr_of!(_177);
            }
        }

        // Unrolled iteration 4
        _31 = ptr::addr_of_mut!(tup.0 .0 .2);
        _31 = _31.wrapping_offset(isize::MIN);
        _46 = 42;
        _88 = 18215089233857363959_usize;
        _31 = _31.wrapping_offset(isize_min);
        *ptr::addr_of_mut!(tup) = (_44, Default::default());
        isize_min = 0;
        let _47 = *_31;
        if _88 == 18215089233857363959 {
            _88 = 0;
            _33 = ptr::addr_of_mut!(_177);
            if _46 == 42 {
                *_33 = ptr::addr_of_mut!(_46);
                println!("{_47}");
                return ptr::addr_of!(_177);
            }
        }
    }
}

fn main() {
    unsafe {
        a();
    }
}