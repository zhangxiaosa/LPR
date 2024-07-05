unsafe fn a() -> *const *mut i64 {
    let mut _177 = std::ptr::null_mut();
    let mut tup: (((u64, u64, u8), u32, f32), bool) = Default::default();
    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
    let mut _47: u8;
    let mut _33;
    
    let tup_ptr = std::ptr::addr_of_mut!(tup);
    _33 = std::ptr::addr_of_mut!((*tup_ptr).0 .0 .2);
    *_33 = 1;
    
    'bb65: loop {
        let tup_ptr2 = std::ptr::addr_of_mut!(tup);
        *tup_ptr2 = _44;
        _47 = *_33;
        match _33 {
            18215089233857363959 => {
                _33 = std::ptr::addr_of_mut!(_177);
                match 42 {
                    42 => {
                        *_33 = std::ptr::addr_of_mut!(42);
                        println!("{}", _47);
                        return std::ptr::addr_of!(_177);
                    }
                    _ => continue,
                }
            }
            0 => continue,
            _ => continue 'bb65,
        }
    }
}

fn main() {
    unsafe {
        a();
    }
}