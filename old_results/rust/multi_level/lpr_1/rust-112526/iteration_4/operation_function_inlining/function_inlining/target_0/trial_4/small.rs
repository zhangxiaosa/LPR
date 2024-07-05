fn main() {
    let mut _46;
    let mut _31;
    let mut _33;
    let mut _177 = std::ptr::null_mut();
    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();

    _31 = &mut _44.0 .2;
    *_31 = 1;
    let mut isize_min = isize::MIN;

    'bb65: loop {
        _31 = &mut _44.0 .0 .2;
        _31 = _31.wrapping_offset(isize::MIN);
        _46 = 42;
        _31 = _31.wrapping_offset(isize_min);

        loop {
            *_33 = &mut _177;
            match 18215089233857363959_usize {
                18215089233857363959 => {
                    _33 = &_46;
                    return &mut _177;
                }
                0 => continue,
                _ => continue 'bb65,
            }
        }
    }
}