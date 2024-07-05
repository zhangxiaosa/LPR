extern crate core;

use core::ptr;

unsafe fn a() -> *const *mut usize {
    let mut _31;
    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
    let mut tup: (((u64, u64, u8), u32, f32), bool) = Default::default();
    'bb65: loop {
        _31 = 1;
        loop {
            _31 = 0;
            let _ = (_44, Default::default());
            break 'bb65;
        }
    }
}

fn main() {
    unsafe {
        a();
    }
}