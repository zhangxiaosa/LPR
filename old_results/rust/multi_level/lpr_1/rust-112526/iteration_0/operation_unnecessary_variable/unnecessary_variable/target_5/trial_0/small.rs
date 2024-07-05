extern crate core;
use core::ptr;

unsafe fn a() -> *const *mut i64 {
    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
    let mut tup: (((u64, u64, u8), u32, f32), bool) = Default::default();
    let mut _95: (((u64, u64, u8), u32, f32), bool) = Default::default();
    let _31 = ptr::addr_of_mut!(_44.0 .2);
    *_31 = 1;

    'bb65: loop {
        _31 = ptr::addr_of_mut!(tup.0 .0 .2);
        _95.0 = _44;
        _31 = _31.wrapping_offset(isize::MIN);

        loop {
            tup = _95;
            let _33 = ptr::addr_of_mut!(_177);

            match 18215089233857363959_usize {
                18215089233857363959 => {
                    *_33 = ptr::addr_of_mut!(0);
                    println!("{}", *_31);
                    return ptr::addr_of!(_177);
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