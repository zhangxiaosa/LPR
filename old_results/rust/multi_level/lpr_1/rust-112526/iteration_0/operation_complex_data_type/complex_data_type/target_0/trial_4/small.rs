extern crate core;

use core::ptr;

unsafe fn a() -> *const *mut i64 {
    let mut _16: usize;
    let mut isize_min: isize;
    let mut _46: u8;
    let _107: i32 = 0;
    let mut _47: u32;
    let mut _88: u64;
    let mut _31: *mut f32;
    let mut _33: *mut *mut i64;
    let mut _90: *mut f32;
    let mut _177: *mut i64 = ptr::null_mut();
    let mut _44_0_2_0: u8 = 0;
    let mut _44_0_2_1: u64 = 0;
    let mut _44_0_2_2: u64 = 0;
    let mut _44_1: u32 = 0;
    let mut _44_2: f32 = 0.0;
    let mut _44: ( ( (u64, u64, u8), u32, f32 ), ) = ( ( (_44_0_2_0, _44_0_2_1, _44_0_2_2), _44_1, _44_2 ), );
    let mut tup_0_0_2_0: u8 = 0;
    let mut tup_0_0_2_1: u64 = 0;
    let mut tup_0_0_2_2: u64 = 0;
    let mut tup_0_1: u32 = 0;
    let mut tup_0_2: f32 = 0.0;
    let mut tup_1: bool = false;
    let mut tup: ( ( (u64, u64, u8), u32, f32 ), bool ) = ( ( (tup_0_0_2_0, tup_0_0_2_1, tup_0_0_2_2), tup_0_1, tup_0_2 ), tup_1 );
    let mut _95_0_0_2_0: u8 = 0;
    let mut _95_0_0_2_1: u64 = 0;
    let mut _95_0_0_2_2: u64 = 0;
    let mut _95_0_1: u32 = 0;
    let mut _95_0_2: f32 = 0.0;
    let mut _95_0: ( ( (u64, u64, u8), u32, f32 ), ) = ( ( (_95_0_0_2_0, _95_0_0_2_1, _95_0_0_2_2), _95_0_1, _95_0_2 ), );
    let mut _95: ( ( ( (u64, u64, u8), u32, f32 ), ), bool ) = ( _95_0, tup_1 );

    _31 = ptr::addr_of_mut!(_44.0 .2);
    *_31 = 1.0;
    isize_min = isize::MIN;

    'bb65: loop {
        let tup_ptr = ptr::addr_of_mut!(tup);
        _31 = ptr::addr_of_mut!((*tup_ptr).0 .0 .2);
        _16 = 18215089233857363959_usize;
        _90 = _31.wrapping_offset(isize::MIN);
        _95.0 = _44;
        _46 = 42;
        _88 = _16;
        _31 = _90.wrapping_offset(isize_min);

        loop {
            let tup_ptr2 = ptr::addr_of_mut!(tup);
            *tup_ptr2 = _95;
            isize_min = _107;
            _47 = *_31;

            match _88 {
                18215089233857363959 => {
                    _88 = 0;
                    _33 = ptr::addr_of_mut!(_177);

                    match _46 {
                        42 => {
                            *_33 = ptr::addr_of_mut!(_46);
                            println!({_47});
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