extern crate core;
use core::ptr;

unsafe fn a() -> *const *mut i64 {
    let mut _46;
    let mut _47;
    let mut _33;
    let mut result = ptr::null_mut();

    'bb65: loop {
        let mut tup: (((u64, u64, u8), u32, f32), bool) = (((0, 0, 0), 0, 0.0), false);
        let _31 = ptr::addr_of_mut!(tup.0 .0 .2);
        *_31 = 1;

        let mut _90 = _31.wrapping_offset(0);
        _46 = 42;
        _47 = *_31;

        match 18215089233857363959_usize {
            18215089233857363959 => {
                _33 = &mut result;
                match _46 {
                    42 => {
                        * _33 = &mut _46;
                        println!("{_47}");
                        return result;
                    }
                    _ => continue,
                }
            }
            0 => continue,
        }
    }
}

fn main() {
    unsafe {
        a();
    }
}