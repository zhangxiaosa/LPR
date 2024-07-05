use std::ptr;

fn a() -> *const *mut isize {
    let mut _46;
    let mut _47;
    let mut _88 = 18215089233857363959_usize;
    let mut _31;
    let mut _33;
    let mut _90;
    let mut _177: *mut isize = std::ptr::null_mut();
    let mut _44: ((u64, u64, isize), u32, f32) = Default::default();
    let mut _tup_0: (((u64, u64, isize), u32, f32), bool) = Default::default();
    let mut _95: (((u64, u64, isize), u32, f32), bool) = Default::default();
    _31 = ptr::addr_of_mut!(_44.0 .2);
    *_31 = 1 as isize;
    'bb65_0: loop {
        let tup_ptr = ptr::addr_of_mut!(_tup_0);
        _31 = ptr::addr_of_mut!((*tup_ptr).0 .0 .2);
        _90 = _31.wrapping_offset(0);
        _95.0 = _44;
        _46 = 42;
        _31 = _90.wrapping_offset(0);
        loop {
            let tup_ptr2 = ptr::addr_of_mut!(_tup_0);
            *tup_ptr2 = _95;
            _47 = *_31;
            match _88 {
                18215089233857363959 => {
                    _88 = 0;
                    _33 = &_177 as *const _ as *mut _;
                    match _46 {
                        42 => {
                            *_33 = &_46 as *const _ as *mut _;
                            println!("{}", _47);
                            return &_177 as *const _;
                        }
                        _ => continue,
                    }
                }
                0 => continue,
                _ => continue 'bb65_0,
            }
        }
    }
}

fn main() {
    let result = unsafe { a() };
    println!("{:p}", result);
}