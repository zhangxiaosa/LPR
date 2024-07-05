fn main() {
    let mut isize_min = -9223372036854775808;
    
    'bb65: loop {
        let tup_ptr = std::ptr::addr_of_mut!(tup);
        let _90 = std::ptr::addr_of_mut!((*tup_ptr).0 .0 .2).wrapping_offset(-9223372036854775808);
        let mut tup: (((u64, u64, u8), u32, f32), bool) = Default::default();
        let mut _33;
        let mut _177 = std::ptr::null_mut();
        let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
        let mut _95: (((u64, u64, u8), u32, f32), bool) = Default::default();
        *_90 = 1;
        _95.0 = _44;
        let _46 = 42;
        let _88 = 18215089233857363959usize;
        let _90 = _90.wrapping_offset(isize_min);

        loop {
            let tup_ptr2 = std::ptr::addr_of_mut!(tup);
            *tup_ptr2 = _95;
            isize_min = 0;
            let _47 = *_90;

            match _88 {
                18215089233857363959 => {
                    _88 = 0;
                    let _33 = std::ptr::addr_of_mut!(_177);
                    
                    match _46 {
                        42 => {
                            *_33 = std::ptr::addr_of_mut!(_46);
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
}