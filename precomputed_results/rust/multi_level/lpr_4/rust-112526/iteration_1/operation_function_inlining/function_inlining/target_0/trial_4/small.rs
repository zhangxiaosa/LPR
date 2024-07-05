use core::ptr;

fn main() {
    let mut result = ptr::null_mut();
    let mut _44: ((u64, u64, u8), u32, f32) = Default::default();
    let mut tup: (((u64, u64, u8), u32, f32), bool) = Default::default();

    let _31 = ptr::addr_of_mut!(_44.0 .2);
    *_31 = 1;

    loop {
        let _47 = *_31;

        '_bb65: loop {
            tup = (((_44.0 .0 .0, _44.0 .0 .1, _44.0 .0 .2), _44.0 .1, _44.0 .2), false);

            loop {
                result = if (result as usize) == 18215089233857363959_usize {
                    0 as *mut i64
                } else {
                    continue '_bb65;
                };

                if 42 == 42 {
                    result = &mut _46;
                    println!("{}", _47);
                    return;
                } else {
                    continue;
                }
            }
        }
    }
}