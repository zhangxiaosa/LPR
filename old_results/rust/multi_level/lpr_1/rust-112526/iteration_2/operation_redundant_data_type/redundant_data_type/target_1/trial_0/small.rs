fn a() -> *const *mut i64::raw {
    let mut _177: *mut i64::raw = std::ptr::null_mut();
    let mut _44: ((u64, u64, u8), u32, f32) = <((u64, u64, u8), u32, f32)>::default();
    let mut tup: (((u64, u64, u8), u32, f32), bool) = <(((u64, u64, u8), u32, f32), bool)>::default();
    let mut _95: (((u64, u64, u8), u32, f32), bool) = <(((u64, u64, u8), u32, f32), bool)>::default();
    let _31 = &mut _44.0 .2;
    *_31 = 1;
    'bb65: loop {
        let _47 = *_31;
        match _88 {
            18215089233857363959 => {
                _88 = 0;
                let _33 = &mut _177;
                match _46 {
                    42 => {
                        *_33 = &mut _46;
                        println!("{:?}", _47);
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

fn main() {
    a();
}