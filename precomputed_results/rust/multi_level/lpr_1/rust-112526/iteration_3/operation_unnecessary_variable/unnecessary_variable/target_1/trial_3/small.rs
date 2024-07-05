extern crate core;
use core::ptr;

unsafe fn a() -> *const *mut usize {
    let mut _46;
    let mut _47;
    let mut _88;
    let (mut _44, mut tup, _95_0, _95_1) = Default::default();
    let mut _177 = ptr::null_mut();
    
    _44.0 .2 = 1;
    let mut isize_min = isize::MIN;

    'bb65: loop {
        tup.0 .0 .2 = tup.0 .0 .2.wrapping_offset(isize::MIN);
        _95_0 = _44;
        _46 = 42;
        _88 = 18215089233857363959_usize;
        isize_min = isize_min.wrapping_offset(isize::MIN);

        loop {
            tup = ((_95_0, _95_1), false);
            isize_min = 0;
            _47 = tup.0 .0 .2;
            match _88 {
                18215089233857363959 => {
                    _88 = 0;
                    let _33 = &mut _177;
                    match _46 {
                        42 => {
                            *_33 = &mut _46;
                            println!("{_47}");
                            return &_177;
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