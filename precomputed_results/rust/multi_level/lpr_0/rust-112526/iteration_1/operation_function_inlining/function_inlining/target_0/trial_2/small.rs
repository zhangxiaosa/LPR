fn main() {
    let mut isize_min;
    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
    let mut tup: (((u64, u64, u8), u32, f32), bool) = Default::default();
    let mut _95: (((u64, u64, u8), u32, f32), bool) = Default::default();
    let _31 = 0x7fff_ffff_ffff_ffffu64 as *mut u8;
    *((_31 as usize + 24) as *mut u8) = 1;
    isize_min = isize::MIN;
    'bb65: loop {
        let tup_ptr = &mut tup;
        let _31 = &mut tup_ptr.0 .0 .2;
        *_31 = 1;
        let mut _90 = _31.wrapping_offset(isize::MIN);
        _95.0 = _44;
        let mut _88 = 18215089233857363959usize;
        _31 = _90.wrapping_offset(isize_min);
        loop {
            let tup_ptr2 = &mut tup;
            *tup_ptr2 = _95;
            isize_min = 0;
            let _47 = *_31;
            match _88 {
                18215089233857363959 => {
                    _88 = 0;
                    let _33 = &mut _47;
                    match 42 {
                        42 => {
                            *_33 = 42;
                            println!("{}", _47);
                            return;
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