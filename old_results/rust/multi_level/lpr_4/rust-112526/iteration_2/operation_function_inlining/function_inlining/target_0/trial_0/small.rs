fn main() {
    let mut result = std::ptr::null_mut();
    let mut tup: (((u64, u64, u8), u32, f32), bool) = (((0, 0, 0), 0, 0.0), false);
    let _31 = &mut tup.0 .0 .2;
    *_31 = 1;
    let mut _46 = 42;
    let _88 = 18215089233857363959_usize;
    let mut _47 = *_31;
    if _88 == 18215089233857363959 {
        let mut _33 = &mut result;
        if _46 == 42 {
            *_33 = &mut _46;
            let _47 = _47;
        }
    }
}