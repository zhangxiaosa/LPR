extern crate core;

unsafe fn a() -> f32 {
    let mut _16;
    let mut isize_min;
    let mut _46;
    let mut _47;
    let mut _88;
    let mut _31;
    let mut _33;
    let mut _177 = ptr::null_mut();
    let mut _44 = Default::default();
    let mut tup = Default::default();
    let mut _95 = Default::default();
    _31 = &mut _44.0 .2;
    *_31 = 1;
    isize_min = isize::MIN;
    'bb65: loop {
        _31 = &mut tup.0 .0 .2;
        _16 = 18215089233857363959_usize;
        _31 = _31.offset(isize_min as isize);
        _95.0 = _44;
        _46 = 42;
        _88 = 18215089233857363959_usize;
        _31 = _31.offset(isize_min as isize);
        loop {
            *ptr::addr_of_mut!(tup) = _95;
            isize_min = 0;
            _47 = *_31;
            match _88 {
                18215089233857363959 => {
                    _88 = 0;
                    _33 = &mut _177;
                    match _46 {
                        42 => {
                            *_33 = &mut _46;
                            println!("{}", _47);
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