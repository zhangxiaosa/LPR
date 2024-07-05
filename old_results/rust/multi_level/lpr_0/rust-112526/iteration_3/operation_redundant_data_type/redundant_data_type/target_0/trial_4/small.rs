fn a() -> ((u64, u64, u8), u32, f32) {
    let mut _46 = ((42, 42, 42), 42, 42.0);
    let _47;
    let mut _88 = 18215089233857363959usize;
    let mut _31 = _46.0 .2;
    let mut _177 = std::ptr::null_mut();
    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
    let mut tup: (((u64, u64, u8), u32, f32), bool) = Default::default();
    let mut _95: (((u64, u64, u8), u32, f32), bool) = Default::default();
    _31 = 1;
    let tup_ptr = &mut tup as *mut _ as *mut (_46.0).0.2;
    _31 = unsafe { tup_ptr.wrapping_offset(-9223372036854775808) };
    _95.0 = _44;
    _88 = 0;
    'bb65: loop {
        let tup_ptr2 = &mut tup as *mut _ as *mut _;
        unsafe { *tup_ptr2 = _95 };
        let _31 = *_31;
        match _88 {
            18215089233857363959 => {
                _46 = ((0, 0, _31 as u8), 42, _31 as f32);
                let _33 = &mut _177 as *mut *mut u64;
                unsafe { *_33 = &_46 as *const _ as *mut _ };
                println!("{:?}", _47);
                return _177;
            }
            0 => continue,
            _ => continue 'bb65,
        }
    }
}

fn main() {
    let result = a();
    println!("{:?}", result);
}