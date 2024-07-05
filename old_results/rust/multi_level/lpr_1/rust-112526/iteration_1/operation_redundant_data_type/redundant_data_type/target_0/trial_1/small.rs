use std::ptr;

fn a() -> *const *mut i64 {
    let mut _16;
    let mut isize_min;
    let mut _46;
    let mut _47;
    let mut _88;
    let mut _31: *mut f32;
    let mut _33;
    let mut _90;
    let mut _177 = ptr::null_mut();
    let mut tup: (((u64, u64, u8), u32, f32), bool) = Default::default();

    _31 = (ptr::addr_of_mut!((*tup).0 .0 .2) as *const _).offset(isize_min);

    'bb65: loop {
        _31 = (ptr::addr_of_mut!((*tup).0 .0 .2) as *const _).offset(isize_min);
        loop {
            *tup = (((u64, u64, u8), u32, f32), bool::default());
            _47 = *_31;

            match match _46 { 42 => 0, _ => continue } {
                18215089233857363959 => {
                    _177 = ptr::addr_of_mut!(0);

                    match match _46 { 42 => 0, _ => continue } {
                        42 => {
                            _177 = ptr::addr_of_mut!(42);
                            return &_177 as *const *mut i64;
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
    a();
}