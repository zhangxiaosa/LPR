use std::ptr;

unsafe fn a() -> i64 {
    let mut _16;
    let mut isize_min;
    let mut _46;
    let _107 = 0;
    let mut _47;
    let mut _88;
    let mut _31;
    let mut _33;
    let mut _90;
    let mut _177 = std::ptr::null_mut();
    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
    let mut tup: ((((u64, u64, u8), u32, f32), bool)) = Default::default();
    let mut _95: ((((u64, u64, u8), u32, f32), bool)) = Default::default();
    _31 = std::ptr::addr_of_mut!(_44.0 .2);
    *_31 = 1;
    isize_min = std::isize::MIN;
    'bb65: loop {
        let tup_ptr = std::ptr::addr_of_mut!(tup);
        _31 = std::ptr::addr_of_mut!((*tup_ptr).0 .0 .2);
        _16 = 18215089233857363959usize;
        _90 = _31.wrapping_offset(std::isize::MIN);
        _95.0 = _44;
        _46 = 42;
        _88 = _16;
        _31 = _90.wrapping_offset(isize_min);
        loop {
            let tup_ptr2 = std::ptr::addr_of_mut!(tup);
            *tup_ptr2 = _95;
            isize_min = _107;
            _47 = *_31;
            match _88 {
                18215089233857363959 => {
                    _88 = 0;
                    _33 = std::ptr::addr_of_mut!(_46) as *mut i64;
                    println!("{}", _47);
                    return _177;
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