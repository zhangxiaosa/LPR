extern crate core;

use core::ptr;

fn main() {
    let mut _177 = ptr::null_mut();
    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
    _44 .0 .2 = 1;

    loop {
        let mut tup: (((u64, u64, u8), u32, f32), bool) = Default::default();
        tup.0 = _44;

        match 0 {
            18215089233857363959 => {
                let mut _46 = 42;
                let _47 = _44 .0 .2;

                _177 = &_46;

                println!("{:?}", _47);
                return;
            }
            _ => {}
        }
    }
}