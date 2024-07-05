use std::ptr;

unsafe fn a() -> *const *mut usize {
    let mut _31;
    let mut _177: *mut usize = std::ptr::null_mut();
    *_31 = 1;
    let mut _44 = Default::default();
    let mut tup = Default::default();
    _31 = &mut _44.0 .2;
    *_31 = 1;
    'bb65: loop {
        _31 = &mut tup.0 .0 .2;
        _31 = _31.wrapping_offset(-(isize::MAX / 2));
        loop {
            *&mut tup = (_44, Default::default());
            let _47 = *_31 as i32;
            match _88 {
                _ if _88 == 18215089233857363959 => {
                    *_33 = &mut _46;
                    println!("{_47}");
                    return &_177;
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