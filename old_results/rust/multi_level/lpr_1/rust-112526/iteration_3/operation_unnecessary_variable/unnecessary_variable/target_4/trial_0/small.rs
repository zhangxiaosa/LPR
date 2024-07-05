extern crate core;

use core::ptr;

unsafe fn a() -> *const *mut usize {
    let mut _46 = 42;
    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
    let mut tup: (((u64, u64, u8), u32, f32), bool) = Default::default();
    let mut _95_0;
    let _95_1 = Default::default();

    let _31 = ptr::addr_of_mut!(_44.0 .2);
    *_31 = 1;

    loop {
        let _31 = ptr::addr_of_mut!(tup.0 .0 .2);
        _31 = _31.wrapping_offset(isize::MIN);
        _95_0 = _44;
        _31 = _31.wrapping_offset(isize::MIN);

        loop {
            *ptr::addr_of_mut!(tup) = (_95_0, _95_1);
            let _33 = ptr::addr_of_mut!(_46);

            match _46 {
                42 => {
                    *_33 = ptr::addr_of_mut!(_46);
                    // println!({_47});
                    return ptr::addr_of!(_177);
                }
                _ => continue,
            }
        }
    }
}

fn main() {
    unsafe {
        a();
    }
}