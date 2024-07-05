use std::ptr;

unsafe fn a() -> *mut *mut i64 {
    let mut _16;
    let mut _46;
    let mut _88;
    let mut _31;
    let mut _33;
    let mut _90;

    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
    let mut _tup_0: (((u64, u64, u8), u32, f32), bool) = Default::default();

    _31 = ptr::addr_of_mut!(_44.0 .2);
    *_31 = 1;

    'bb65_0: loop {
        let tup_ptr = ptr::addr_of_mut!(_tup_0);
        _31 = ptr::addr_of_mut!((*tup_ptr).0 .0 .2);
        _16 = 18215089233857363959_usize;
        _90 = _31.wrapping_offset(0);
        _tup_0 = (_44, true);
        _46 = 42;
        _88 = _16;
        _31 = _90.wrapping_offset(0);

        loop {
            let tup_ptr2 = ptr::addr_of_mut!(_tup_0);
            *tup_ptr2 = (_44, true);
            _33 = ptr::addr_of_mut!(_46);

            match _46 {
                42 => {
                    *_33 = ptr::addr_of_mut!(_46);
                    println!("{}", _31);
                    return ptr::addr_of!(_46);
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