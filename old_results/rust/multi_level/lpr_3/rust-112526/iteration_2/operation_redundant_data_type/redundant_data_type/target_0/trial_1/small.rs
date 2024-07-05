extern crate core;

fn a() -> *const *mut (((u64, u64, u8), u32, f32), bool) {
    let mut _44: *const *mut (((u64, u64, u8), u32, f32), bool) = core::ptr::null_mut();
    (*_44) = ((((0, 0, 1), 0, 0.0), false));
    
    loop {
        match **_44 {
            (((18215089233857363959, _, _), _, _), _) => {
                *_44 = &mut _44;
                println!("{}", _44 as usize);
                return &_44;
            },
            _ => continue,
        }
    }
}

fn main() {
    unsafe {
        a();
    }
}