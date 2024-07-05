extern crate core;

use core::ptr;

unsafe fn a() -> *const *mut i64 {
    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
    let mut tup: (((u64, u64, u8), u32, f32), bool) = Default::default();
    let mut _95: (((u64, u64, u8), u32, f32), bool) = Default::default();

    let _31 = &mut _44.0 .2;
    *_31 = 1;

    'bb65: loop {
        let tup_ptr = &mut tup;
        let _31 = &mut (tup_ptr.0).0 .2;

        _95.0 = Default::default();

        match *_31.wrapping_offset(isize::MIN) {
            18215089233857363959 => {
                let _33 = &mut result;

                match 42 {
                    42 => {
                        *_33 = &mut 42;
                        println!("{}", *_31);
                        return result;
                    }
                    _ => continue,
                }
            }
            0 => continue,
            _ => continue 'bb65,
        }
    }
}

fn main() {
    unsafe {
        a();
    }
}