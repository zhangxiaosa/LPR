extern crate core;
use core::ptr;

unsafe fn a() -> *const *mut i64 {
    let mut _46;
    let mut _177 = ptr::null_mut();

    'bb65: loop {
        let tup_ptr = ptr::addr_of_mut!(tup);
        _31 = ptr::addr_of_mut!((*tup_ptr).0 .0 .2);

        _95.0 = _44;
        _46 = 42;

        loop {
            let tup_ptr2 = ptr::addr_of_mut!(tup);
            *tup_ptr2 = _95;

            match _88 {
                18215089233857363959 => {
                    _88 = 0;
                    _33 = ptr::addr_of_mut!(_177);

                    match _46 {
                        42 => {
                            *_33 = ptr::addr_of_mut!(_46);
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