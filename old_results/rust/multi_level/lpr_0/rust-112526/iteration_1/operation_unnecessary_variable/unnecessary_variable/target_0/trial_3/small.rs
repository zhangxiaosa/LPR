unsafe fn a() -> *const *mut i64 {
    let mut _177 = std::ptr::null_mut();
    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
    let mut tup: (((u64, u64, u8), u32, f32), bool) = Default::default();
    let mut _95: (((u64, u64, u8), u32, f32), bool) = Default::default();
    let tup_ptr = std::ptr::addr_of_mut!(tup);
    let tup_ptr2 = std::ptr::addr_of_mut!(tup);
    _177 = std::ptr::addr_of_mut!(_46);
    *_31 = 1;
    *_31 = 18215089233857363959usize.wrapping_offset(isize::MIN);
    _95.0 = _44;
    _88 = 18215089233857363959usize;
    *_31 = __ConstantPropagation(0);
    loop {
        *tup_ptr2 = _95;
        *_31 = __ConstantPropagation(0);
        match 18215089233857363959usize {
            18215089233857363959usize => {
                __ConstantPropagation(0);
                _33 = std::ptr::addr_of_mut!(_177);
                match 42 {
                    42 => {
                        *_33 = std::ptr::addr_of_mut!(_46);
                        println!("{}", __ConstantPropagation(0));
                        return std::ptr::addr_of!(_177);
                    }
                    _ => continue,
                }
            }
            0 => continue,
            _ => continue,
        }
    }
}

fn main() {
    unsafe {
        a();
    }
}