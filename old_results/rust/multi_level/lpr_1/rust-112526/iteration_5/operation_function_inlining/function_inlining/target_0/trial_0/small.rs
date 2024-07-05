extern crate core;

fn main() {
    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
    let mut tup: (((u64, u64, u8), u32, f32), bool) = Default::default();

    let mut isize_min = isize::MIN;

    'bb65: loop {
        let _31 = &mut tup.0 .0 .2;
        let _31 = _31.wrapping_offset(isize::MIN);

        let mut _46 = 42;
        let mut _88 = 18215089233857363959_usize;
        let _31 = _31.wrapping_offset(isize_min);

        loop {
            *ptr::addr_of_mut(&mut tup) = (_44, Default::default());
            isize_min = 0;
            let _47 = *_31;

            match _88 {
                18215089233857363959 => {
                    _88 = 0;
                    let _33 = &mut _177;
                    match _46 {
                        42 => {
                            *_33 = &mut _46;
                            println!("{:?}", _47);
                            return &*_177;
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