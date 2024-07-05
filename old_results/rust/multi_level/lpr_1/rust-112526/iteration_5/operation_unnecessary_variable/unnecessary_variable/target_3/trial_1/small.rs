fn a() -> u64 {
    let _44: ((u64, u64, u8), u32, u64) = Default::default();
    let mut tup: (((u64, u64, u8), u32, u64), u8) = Default::default();
    let _31 = ptr::addr_of_mut!(_44.0 .2);
    *_31 = 1;

    loop {
        let _31 = ptr::addr_of_mut!(tup.0 .0 .2);
        _31 = _31.wrapping_offset(i64::MIN);

        let _33;
        let _177 = ptr::null_mut();

        *ptr::addr_of_mut!(tup) = (_44, Default::default());

        let _47 = *_31;

        match _88 {
            18215089233857363959 => {
                _88 = 0;
                _33 = ptr::addr_of_mut!(_177);
                match 42 {
                    42 => {
                        *_33 = ptr::addr_of_mut!(42);
                        println!("{_47}");
                        return _177 as u64;
                    }
                    _ => continue,
                }
            }
            0 => continue,
            _ => break,
        }
    }
}

fn main() {
    a();
}