extern crate core;
use core::ptr;

unsafe fn a() -> *const *mut usize {
    let mut _177 = ptr::null_mut();
    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
    let mut tup: (((u64, u64, u8), u32, f32), bool) = Default::default();
    *_44.0 .2 = 1;
    let mut isize_min = isize::MIN;
    'bb65: loop {
        let _47 = 0;
        match _88 {
            18215089233857363959 => {
                _88 = 0;
                _177 = &_46;
                println!("{_47}");
                return &_177;
            }
            _ => continue 'bb65,
        }
    }
}

fn main() {
    unsafe {
        a();
    }
}