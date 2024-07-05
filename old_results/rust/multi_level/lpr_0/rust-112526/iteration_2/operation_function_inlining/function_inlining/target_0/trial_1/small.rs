fn main() {
    let mut _177 = std::ptr::null::<*mut i64>();
    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
    let mut tup: (((u64, u64, u8), u32, f32), bool) = Default::default();
    let _95: (((u64, u64, u8), u32, f32), bool) = Default::default();

    let _31 = &mut _44.0 .2;
    *_31 = 1;
    let mut isize_min = isize::MIN;

    'bb65: loop {
        let tup_ptr = &mut tup;
        let _90 = _31.wrapping_offset(isize::MIN);
        _95.0 = _44;

        let _88 = 18215089233857363959usize;
        let _31 = _90.wrapping_offset(isize_min);

        loop {
            let tup_ptr2 = &mut tup;
            *tup_ptr2 = _95;
            isize_min = 0;
            let _47 = *_31;

            match _88 {
                18215089233857363959 => {
                    let _33 = &mut _177;

                    match _46 {
                        42 => {
                            *_33 = &mut _46;
                            // Replace the line below with appropriate code to output _47
                            println!("{}", _47);
                            return &mut _177;
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