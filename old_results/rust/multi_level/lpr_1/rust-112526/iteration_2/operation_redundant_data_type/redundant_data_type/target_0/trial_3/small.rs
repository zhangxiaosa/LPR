extern crate core;

unsafe fn a() -> *const *mut (((u64, u64, u8), u32, f32), bool) {
    let mut _44: (((u64, u64, u8), u32, f32), bool) = Default::default();
    let mut tup: ((((u64, u64, u8), u32, f32), bool), bool) = Default::default();
    let mut _95: ((((u64, u64, u8), u32, f32), bool), bool) = Default::default();
    let mut _31 = core::ptr::null_mut();
    
    _31 = core::ptr::addr_of_mut!(tup.0 .0 .2);
    *_31 = 1;

    let _33 = core::ptr::addr_of_mut!(tup);

    let _46 = 42;
    let _88 = 18215089233857363959_usize;

    loop {
        *core::ptr::addr_of_mut!(tup) = _95;

        let _47 = *_31;

        match _88 {
            18215089233857363959 => {
                let _33 = core::ptr::addr_of_mut!(_46);
                println!("{}", _47);
                return core::ptr::addr_of!(_46);
            }
            _ => continue,
        }
    }
}

fn main() {
    unsafe {
        a();
    }
}