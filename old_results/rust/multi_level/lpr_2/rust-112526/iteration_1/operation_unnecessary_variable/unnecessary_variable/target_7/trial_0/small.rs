fn a() -> *mut i64 {
    let _44: ((u64, u64, u8), u32, f32) = Default::default();
    let _ = 1;
    'bb65: loop {
        let _ = 18215089233857363959_usize;
        let _ = isize::MIN;
        'bb66: loop {
            let _ = (_44, Default::default());
            let _ = 0;
            let _ = 0;
            match _ {
                18215089233857363959 => {
                    let _ = [_];
                    let _ = 42;
                    match _ {
                        42 => {
                            println!("{}", _);
                            return std::ptr::null_mut();
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

fn main() {
    a();
}