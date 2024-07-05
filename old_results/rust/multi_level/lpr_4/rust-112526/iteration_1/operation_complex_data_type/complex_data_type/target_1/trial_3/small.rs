extern crate core;
use core::ptr;

unsafe fn a() -> *const *mut i64 {
    let mut isize_min;
    let mut tup_0_0_0_0: u64 = u64::default();
    let mut tup_0_0_0_1: u64 = u64::default();
    let mut tup_0_0_0_2: u8 = u8::default();
    let mut tup_0_0_1: u32 = u32::default();
    let mut tup_0_0_2: f32 = f32::default();
    let mut tup_1: bool = bool::default();
    let mut tup_ptr = ptr::addr_of_mut!(tup.0 .0 .2);
    let mut result_ptr = ptr::null_mut();
    let mut _95: (((u64, u64, u8), u32, f32), bool) = Default::default();
    
    *tup_ptr = 1;
    isize_min = isize::MIN;
    'bb65: loop {
        tup_ptr = tup_ptr.wrapping_offset(isize::MIN);
        _95.0 = (
            (u64::default(), u64::default(), u8::default()),
            u32::default(),
            f32::default(),
        );
        tup_1 = 42;
        let mut _88 = 18215089233857363959_usize;
        let mut _31 = tup_ptr.wrapping_offset(isize_min);
        loop {
            let tup = _95;
            isize_min = 0;
            let _47 = *_31;
            match _88 {
                18215089233857363959 => {
                    _88 = 0;
                    let mut _33 = ptr::addr_of_mut!(result);
                    match tup_1 {
                        42 => {
                            *_33 = ptr::addr_of_mut!(tup_1);
                            println!("{}", _47);
                            return result_ptr;
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