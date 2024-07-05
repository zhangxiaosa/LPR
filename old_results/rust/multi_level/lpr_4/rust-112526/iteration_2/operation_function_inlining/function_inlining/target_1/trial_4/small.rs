fn main() {
    unsafe {
        let mut isize_min;
        let mut result = std::ptr::null_mut();
        let mut tup: (((u64, u64, u8), u32, f32), bool) = (((0, 0, 0), 0, 0.0), false);
        let _31 = std::ptr::addr_of_mut!(tup.0.0.2);
        *_31 = 1;
        isize_min = isize::MIN;
        loop {
            let _31 = std::ptr::addr_of_mut!(tup.0.0.2);
            let _90 = _31.wrapping_offset(isize::MIN);
            let _88 = 18215089233857363959_usize;
            let _31 = _90.wrapping_offset(isize_min);
            loop {
                tup = (((0, 0, 0), 0, 0.0), false);
                isize_min = 0;
                let _47 = *_31;
                match _88 {
                    18215089233857363959 => {
                        _88 = 0;
                        let _33 = std::ptr::addr_of_mut!(result);
                        match _46 {
                            42 => {
                                *_33 = std::ptr::addr_of_mut!(_46);
                                return std::ptr::addr_of!(result);
                            }
                            _ => continue,
                        }
                    }
                    0 => continue,
                    _ => continue,
                }
            }
        }
    }
}